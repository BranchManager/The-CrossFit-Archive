//mmu.cpp
//MMU Lab Template by Stephen Marz
//<NOAH BRANCH>
//<3/12/2019
//
//
//
//LAb did not work
//All address seem to be righ from my understanding
//but the lab refused to work ¯\_(ツ)_/¯ 
#include <mmu.h>

extern uint32_t MMU_TABLE[MMU_TABLE_SIZE];
const uint32_t ALIGN_TO = 4096;
void Set(volatile uint32_t *bitset, int bit_index){
	*bitset |= (1 << bit_index);


}

//Test will take a 32-bit bitset and a single bit index. Test will return false if that given bit is 0 or true if that given bit is 1.
bool Test(const volatile uint32_t *bitset, int bit_index){

	return (*bitset >> bit_index)&1; 

}
//Clear will take a 32-bit bitset and a single bit index. Clear will clear the given bit index to 0 of the original bitset.
void Clear(volatile uint32_t *bitset, int bit_index){
	*bitset &= ~(1 << bit_index);


}
void what_we_mappin(PROCESS *p,bool regs){
	uint32_t *root1,*root2,*space,*indexvpn,
			 *indexvpn0,vpn1,vpn0,ppnFull1;
	uint32_t program_begin,program_end,stack_begin,stack_end;
	char arr[20];
	char *str=arr;
	
	space = (uint32_t *)(MMU_TABLE + 1024 * 10*(p->pid-1));

	/*This alligns the root table*/
	root1 = (uint32_t*)(((uint32_t)space + ALIGN_TO - 1)&(-ALIGN_TO));
	p->mmu_table = (uint32_t)&root1;
	
	//ERROR CHECKING: root aligned page table	
		/* write_string("This is ALIGNED root1");
		hex_to_string(str,(int)root1,true);
		write_stringln(str);
		write_stringln(" ");*/
	//ERROR CHECKING: program ans tack addresses
		/*write_string("p->program is ");
		hex_to_string(str,(uint32_t)p->program,true);
		write_stringln(str);
		write_string("p->regs[2] is ");
		hex_to_string(str,(uint32_t)p->regs[2],true);
		write_stringln(str);*/

		//	write_stringln(" ");
	
	/*if regs is fals then we are mapping the program*/
	if(regs == false){
		//Forming program being and end here
		program_begin = (uint32_t)(p->program) & (~0xfff);
		program_end = ((uint32_t)p->program + 4095 + 4096) & (~0xfff);
		
		//ERROR CHECKING: print out program begin and end
			/*write_string("program begin and end are as follows");
			hex_to_string(str,(int)program_begin,true);
			write_string(str);
			write_stringln(" ");
			hex_to_string(str,(int)program_end,true);
			write_string(str);
			write_stringln(" ");*/



		//*vpn 1 and vpn 0
		vpn1 = ((uint32_t)p->program >> 22);
		vpn0 = ((uint32_t)p->program >> 12) & 0x3ff;
		
		//ERROR CHECKING:print vpn1 and vpn 0
			/*write_string("vpn1 = ");
			hex_to_string(str,(int)vpn1,true);
			write_stringln(str);
		
			write_string("vpn0 = ");
			hex_to_string(str,(int)vpn0,true);
			write_stringln(str);
			write_stringln(" ");*/

	/*else we are checking the stack*/
	}else{
		

		stack_begin = ((uint32_t)p->regs[2])&(~0xfff);
		stack_end = ((uint32_t)p->regs[2] + 4095 + 8192)&(~0xfff);

		//ERROR CHECKING: print stack begina and end

		/*write_string("stack begin and end are as follows");
			hex_to_string(str,(int)stack_begin,true);
			write_string(str);
			write_stringln(" ");
			hex_to_string(str,(int)stack_end,true);
			write_string(str);
			write_stringln(" ");*/

		//set vpn1 and 0 again
		vpn1 = ((uint32_t)p->regs[2] >> 22);
		vpn0 = ((uint32_t)p->regs[2] >> 12) & 0x3ff;
		//ERROR CHECKING: vpn1 and 0
			/*write_string("vpn1 = ");
			hex_to_string(str,(int)vpn1,true);
			write_stringln(str);
		
			write_string("vpn0 = ");
			hex_to_string(str,(int)vpn0,true);
			write_stringln(str);
			write_stringln(" ");*/

	}



		
	indexvpn = (uint32_t*)((uint32_t)root1 + (vpn1*4)); //MMU_TABLE[vpn1];
	//set index vpn in the root table
	

	//ERROR CHECKING: make sure that vpn1 index is what we expected
		/*write_string("vpn1 adress in lvl1 table (and pointing too) = ");
		hex_to_string(str,(int)indexvpn,true);
		write_stringln(str);
		write_stringln(" ");*/

	
	// if RWX bit not set translate to physicl address? By doing the following?//
	if((*indexvpn & 0xe) == 0){
		root2 = root1 + 0x400; //set start of level 0 page table
		//ERROR CHECKING: make sure root starts at right spot
			/*write_string("lvl 0 starts at = ");
			hex_to_string(str,(int)root2,true);
			write_stringln(str);
			write_stringln(" ");*/

		*indexvpn = ((uint32_t)root2 >> 2);//Have indexvpn point ot start of root tabl shifted to the right twice
		//set valid bit and U bit if mode == 0
		*indexvpn |= 1;

		if(p->mode == USER)
			*indexvpn |= (1 << 4);


		//ERROR CHECKING: make sure the vpn1 content is set correctly

			/*write_string(" vpn1 index points to level 0 root at (shifted 2): ");
			hex_to_string(str,(int)*indexvpn);
			write_stringln(str);*/

		indexvpn0 = (uint32_t*)((uint32_t)root2 +  (vpn0*4));//index in the leve 0 table

		//ERROR CHECKING: is lvl 0 what we expect
			/*write_string("lvl 0 vpn0 index is  ");
			hex_to_string(str,(int)indexvpn0,true);
			write_stringln(str);
			write_stringln(" ");*/
		
		//If regs is false then we are setting up program address
		if(regs == false){
			
			/*The following inserts into the level 0 page table
			 * after shifting to the write twice to account for the 34 bit number.
			 * we do thi sfor the program begin and program end.
			 * we also set the XRV bits
			 */
			*indexvpn0 = ((uint32_t)program_begin >> 2)&(~0x3ff);
			*indexvpn0 = *indexvpn0 | 0xb;

			Clear(indexvpn0,2);//we dont need the W bit
			if(p->mode == USER)//if the mode bit is 0 then set user bit
				Set(indexvpn0,4);


			
			//ERROR CHECKING: double checking the address are right adn the address content is right
				/*write_string("program begin shifted right stored at vpn0  and adress(last 10 chopped): ");
				hex_to_string(str,(int)*indexvpn0,true);
				 write_stringln(str);
				hex_to_string(str,(int)indexvpn0,true);
				write_stringln(str);*/
	
			/* here we are setting the right program bits and shifftign
			 * by 2 to account for the 34 bit ppn	
			 */
			*(indexvpn0+1) = ((uint32_t)program_end >>2)&(~0x3ff);
			*(indexvpn0+1) = *(indexvpn0+1) | 0xb;
			Clear((indexvpn0+1),2);//we dont need the W bit
			if(p->mode == USER)
				Set((indexvpn0+1),4);
	
			//ERROR CHECKING: checking stack addresses
				/*write_string("program end shifted right stored at vpn0 + 1 ");
				hex_to_string(str,(int)*(indexvpn0 +1),true);
				write_stringln(str);
				hex_to_string(str,(int)(program_end),true);
				write_stringln(str);
				hex_to_string(str,(int)(indexvpn0 +1),true);
				write_stringln(str);
				write_stringln(" ");*/

		}else{
			//Else we are dealing witht the stack
			


			*indexvpn0 = ((uint32_t)stack_begin >> 2 ) & (~0x3ff);
			*(indexvpn0 + 1) = ((stack_begin + 4096) >> 2) & (~0x3ff);
			*(indexvpn0 + 2) = ((stack_begin + 8192) >> 2) & (~0x3ff);

			*indexvpn0 = *indexvpn0 | 0x17;
			*(indexvpn0 +1) = *(indexvpn0 +1) | 0x17;
			*(indexvpn0 +2)= *(indexvpn0 + 2) | 0x17;

			write_stringln("stack addresses ");
			hex_to_string(str,(int)(indexvpn0),true);
			write_stringln(str);
			hex_to_string(str,(int)*(indexvpn0),true);
			write_stringln(str);

			hex_to_string(str,(int)(indexvpn0 + 1),true);
			write_stringln(str);
			hex_to_string(str,(int)*(indexvpn0 + 1),true);
			write_stringln(str);

			hex_to_string(str,(int)(indexvpn0 + 2),true);
			write_stringln(str);
			hex_to_string(str,(int)*(indexvpn0 + 2),true);
			write_stringln(str);

			write_stringln(" ");

		}

		


	}




}


void mmu_disable()
{
	set_satp(get_satp() & ~(1 << 31));	
}

void mmu_enable(PROCESS *p)
{
	if(p->mmu_table != 0){
		set_satp((1<<31) | p->mmu_table >> 12);
	}


}

void mmu_map(PROCESS *p)
{
	what_we_mappin(p,false);
	what_we_mappin(p,true);

}

void mmu_unmap(PROCESS *p)
{
	uint32_t *space,*root1, *nl;

	space = (uint32_t *)(MMU_TABLE + 1024 * 10*(p->pid-1));

	
	root1 = (uint32_t*)(((uint32_t)space + ALIGN_TO - 1)&(-ALIGN_TO));
	for(int i = 0; i < 1024;i++){
		if(Test((root1 + i),0)){
			nl = (uint32_t *)(root1 + i);
			*nl = *nl & 0;
			*(nl + 1) = *(nl + 1) & 0;
			*(nl + 2) = *(nl + 2) & 0;
		}

		*(root1 + i) = *(root1 + i) & 0;
	}


}

void hello()
{
	//This is sample code. This will run the process for 10,000,000 iterations
	//and then sleep for 5 seconds over and over again.
        ecall(SYS_SET_QUANTUM, 10);
        do {
                for (volatile int i = 0;i < 10000000;i++);
                ecall(SYS_SLEEP, 5);
        } while(1);
}
void add(){
	int a = 1, b = 1,c;
	c = a + b;
	ecall(SYS_EXIT,0);
}

void sleep_for_10_seconds()
{
		ecall(SYS_SLEEP, 10);
		ecall(SYS_EXIT, 0);
}

void test()
{
	//Put whatever you want to test here.
        new_process(hello, 0, 0, MACHINE);
        new_process(hello, 0, 0, SUPERVISOR);
        new_process(hello, 0, 0, USER);
		new_process(add, 0, 0, USER);
		//new_process(sleep_for_10_seconds(), 0, 0, SUPERVISOR);

}
