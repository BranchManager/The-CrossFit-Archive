/*	Noah Branch Lab2
 *	This lab essentially Creates a UART driver
 */

/* Setting the divisor and and the MMIO at base adress 0x100000000*/
typedef unsigned short uint16_t;
const uint16_t divisor = (18000000/115200)-1;
char *const UART_BASE=(char*)0x10000000;
const char *const UART_RBR=UART_BASE + 0;
char *const UART_THR=UART_BASE + 0;
char *const UART_LCR = UART_BASE + 3;
char *const UART_LSR = UART_BASE + 5;


//Test will take a 32-bit bitset and a single bit index. Test will return false if that given bit is 0 or true if that given bit is 1.
bool Test(const char bitset, int bit_index){

	return (bitset >> bit_index)&1; 


}

void init(){
	//This Function initalizes the Base adress and all it's offsets
	//Does allot with the UART registers and setting bits in the LCR egister
	*UART_LCR = (0x80);
	*UART_LCR = *UART_LCR | (0x03);
	*UART_LCR = *UART_LCR | (0x08);



	char *const UART_DLL = UART_BASE + 0;
	char *const UART_DLM = UART_BASE + 1;

	//	below we set the divisor upper 8 and lower 8 bits

	*UART_DLL = divisor & 0xff;
	*UART_DLM = (divisor >> 8) & 0xff;

	//	Clear(*UART_LCR,8);
	*UART_LCR = (0x03 | 0x08);	
}
//This handles reading the ascii data
char read_char(){
	if(Test(*UART_LSR,0)==0){
		return '\0';
	}else{
		return *UART_RBR;
	}
}

//This writes the asii data
void write_char(char c){
	//if(Test(UART_LSR,6)==0){

	while(1){
		if(Test(*UART_LSR,6)==1)
			break;
	}
	*UART_THR = c;

	//	}
}
//just calls write char essentally
void write_string(const char *out){
	const char *t;
	for(t = out; *t != '\0'; t ++){
		write_char(*t);
	}

}

void write_stringln(const char *out){
	write_string(out);
	write_char('\r');
	write_char('\n');

}
//this will extract two numbers as they are typed out as long as you dont use letters
//example 4w 5 6 will yield 5 + 6 becuase 4w is not a number;
void extract_two_numbers(int &left, int &right, bool echo){
	char c;
	//char *b;
	int num = 0;
	bool neg = false;
	bool ls = true,rs = false, alpha = false;
	while(1){
		c = read_char();
		if(echo == true){
			write_char(c);
		}
		if(c != 0){
			//the following if statment  sets num too the correct number
			if(c <= 57 && c >= 48){
				num = num * 10 + c - '0';
			}else if( c == '-'){
				neg = true;
			
			//If we read a ' ' then make sure the following character is not a letter and 
			//set it to eaither the right or left number
			}else if( (c == ' ') && alpha != true ){
				if( c == 13)
					write_char(' ');
				if( ls == true){
					if(neg == true){
						num  *= -1;
					}
					left = num;
					rs = true;
					ls = false;
					num = 0;
				}else if( rs == true){
					right = num;
					rs = true;
					return;
				}
			}else if(alpha != true){
				if(rs == true)
					right = num;
				break;
				alpha = false;
			}	

		}
		
	}

	 return;

}

//This function takes integers and turns them int strings
void to_string(char *dest, int value){
	int i = 0;
	int g;
	char u;
	bool neg = 0;
	
	if(value < 0){
		value *= -1;
		neg = 1;
	}
	//puts the digits in backwards
	while(value){
		int b = value % 10;
		dest[i++] = 48 + b;

		value = value/10;
	}

	//take into account if the number is negative
	if(neg)
		dest[i++] = '-';
	dest[i] = '\0';

	for( g = 0; dest[g] != '\0';g++){
	}
	int size = g;
		for(int h = 0, b = size-1; h < size/2;h++,b--){

		u = dest[h];
	
		dest[h] = dest[b];

		dest[b] = u;
	}
		return;

}

