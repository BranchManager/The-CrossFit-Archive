//Noah Branch lab3
//////////////////////////////////
//
// Do not modify anything between
// this box and the one below
//
/////////////////////////////////
#include <sched.h>


/////////////////////////////////
//
// Implement the following below
//
////////////////////////////////

extern PROCESS process_list[MAX_PROCESSES];
extern SCHEDULE_ALGORITHM scheduling_algorithm;
extern char stack_space[STACK_ALLOC * MAX_PROCESSES];


#if defined(STUDENT)
static void proc_10_secs_run()
{
	uint32_t END_AFTER = get_timer_lo() / TIMER_FREQ + 10;
	write_stringln("\r\nI do nothing but quit after 10 seconds.\r\n");
	while (get_timer_lo() / TIMER_FREQ < END_AFTER);
}

static void proc_10_secs_sleep()
{
	write_stringln("\r\nI'm going to sleep for 10 seconds, then quitting.\r\n");
	sleep_process(get_current(), 10);
	wait();
}

void add_new_process(int padd)
{
	switch (padd) {
		case 1:
			new_process(proc_10_secs_run, "10 second run process", 10);
		break;
		default:
			new_process(proc_10_secs_sleep, "10 second sleep process", 10);
		break;
	}
}
#endif
void new_process(void (*func)(), const char *name, int32_t priority)
{
	//This function adds new processess to the list
	//we set its name,its PID is index +1 set its state to RUNNING
	//and make sure its priority is between 10 and -10

	for(uint32_t i = 0; i < MAX_PROCESSES;i++){
		if(process_list[i].state == DEAD){
			strcpy(process_list[i].name, name);
			process_list[i].program = func;
			process_list[i].pid = i + 1;
			process_list[i].state = RUNNING;

			if(priority < -10)
				priority = -10;
			if(priority > 10)
				priority = 10;

			process_list[i].priority = priority;
			process_list[i].quantum_multiplier = process_list[i].priority + 10;
			process_list[i].regs[SP] = (uint32_t)stack_space+STACK_ALLOC*(process_list[i].pid)-1;
			process_list[i].regs[RA] = (uint32_t)recover;
			break;
		}
	}

}
//SETS process to dead so it can be removed form the process list later
void del_process(PROCESS *p)
{
	p->quantum_multiplier= p->quantum_multiplier-10;
	p->state=DEAD;	
}
//THis just sets the process to sleeping
void sleep_process(PROCESS *p, uint32_t sleep_time)
{
	p->state = SLEEPING;
	p->sleep_time = (get_timer_lo()/TIMER_FREQ) + sleep_time;
}
//Mad props to Jacob with help on this part;
//This basically determins if the rpocess is running or sleeping and
//if it is we return true
bool youRunninYet(int i){
	if(process_list[i].state == RUNNING){
		return true;
	}else if(process_list[i].state == SLEEPING){
		if(process_list[i].sleep_time < (get_timer_lo()/TIMER_FREQ)){
			process_list[i].state = RUNNING;
			return true;
		}
	}else{
		return false;
	}

}
//This is a combination of round robin and ml
//if ml is a legit priority then it runs according to priority
PROCESS* roundNround(PROCESS *current,int ml){
	//we start at the current process and go to the next form there
	int i = current->pid-1;
	while(1){
		i++;
		if(i == 10)	i=0;
		//in the followinf we are checking if we run by priority
		//if we are using ml we are
		//we also check if the process is dead by calling a funciton
		if(ml > 10){
			if(youRunninYet(i)){
				return &process_list[i];
			}
		}
		else if(process_list[i].priority == ml){
			if(youRunninYet(i))
				return &process_list[i];

		}
	}
}
PROCESS *ML(PROCESS *current){
	//This simply goes through tthe list and finds the highest priorty and
	//set that so we know which priority
	//to check first when running round robin
	int low = 10;
	for(uint32_t h = 0; h < MAX_PROCESSES; h++){
		if(process_list[h].priority <= low){
			low = process_list[h].priority;
		}

	}
	return roundNround(current,low);
	
}
PROCESS *MLF(PROCESS *current){
	//MLF has problems and I dont know why*************buuuuut this is 
	//what is suppose to do
	//we call ML to run the highest priority
	//then increase the quantum multiplier so process runs longer
	//but we also decrease priority
	PROCESS *a=ML(current);	
	a->quantum_multiplier = a->quantum_multiplier+a->quantum_multiplier;
	if(a->state != DEAD && a->priority < 10){
		//write_stringln("HELLO PPLE");
		//printInt(a->priority);
		a->priority = a->priority+1;
		//write_stringln("HELLO ALL");
		return a;
	}
	return a;

}
PROCESS *schedule(PROCESS *current)
{
	//this scheduler runs basically by what is being given as a argumet
	//bieng round robin, multilevel, and multilevel feeback
	int i = current->pid - 1;
	i++;
	switch (scheduling_algorithm) {
		case SCHED_RR:
			return roundNround(current,999);	//	return &process_list[i];
		break;
		case SCHED_ML:
			return ML(current);		
	
		break;
		case SCHED_MLF:
			return MLF(current);
		break;
		default:
			return &process_list[0];
		break;
	}
}
