//Noah Branch
//
//lab1
#include <stdint.h>
//#include <iostream>
//#include <bitset>
uint32_t bitset = 0;

//Set will take a 32-bit bitset and a single bit index. Set will set the given bit index to 1 of the original bitset.
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

/*Mask will generate a "mask" of binary 1s from bit_start to bit_end.*/
/*constexpr*/ uint32_t Mask(int bit_start, int bit_end){
	uint32_t maskit=1;
	uint32_t bitshift=1;
	uint32_t fin=0;
	/* The following if statments handle if the bit_start is smaller than bit_end or if 
	 * the user enters a negative number
	 * and check if the bit_start number is 31
	 * */
	if(bit_start < 0)
		bit_start +=32;
	if(bit_end < 0)
		bit_end += 32;

	if(bit_start < bit_end){
		int be = bit_end;
		bit_end = bit_start;
		bit_start = be;
	}

	if(bit_start == 31){
		bitshift <<= bit_start;
		bitshift |= 0x7fffffff;
	}else{
		bitshift <<= (bit_start+1 );
		bitshift--;
		
	}
	maskit <<= (bit_end);
	maskit--;

	fin = bitshift ^ maskit;


	return fin;



}
/*int main(){
	uint32_t f;
	bool t;
	Set(&bitset,2);
	std::cout<<bitset<<"<set bit \n";
	t=Test(&bitset,2);
	std::cout<<t<<" "<<std::bitset<16>(bitset)<<"<tested bit \n";
	Clear(&bitset,2);
	std::cout<<t<<" "<<std::bitset<16>(bitset)<<"cleared bit\n";

	f=Mask(-22,2);
//	Clear(&f,4);	
	std::cout<<f<<" "<<std::bitset<32>(f)<<"\n";
	std::cout<<std::hex<<f<<"\n";


}*/
