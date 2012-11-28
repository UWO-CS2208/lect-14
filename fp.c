#include <stdlib.h>
#include <stdio.h>

int main(int argc, char**argv){

	//Think of a union as providing multiple "windows" 
	//into which we can peer to look at the same chunk
	//of memory in different ways

	typedef union{
      		float f;
      		int i;
   	} num_t;

	num_t n;
	n.f = strtof(argv[1],NULL);

	//Interpret 3.25 in IEE 754-1985 as float
	printf("%f\n", n.f);

	//Interpret 3.25 in IEEE 754-1985 as an integer
	printf("0x%08X\n",n.i);

}
