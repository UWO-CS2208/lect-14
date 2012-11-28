#include <stdio.h>

int main(){

	double a=0.1;
	double b=0.2;
	double c=0.3;
	double ab = a+b;
	double bc = b+c;
	double abc1 = ((a+b)+c);
	double abc2 = (a+(b+c));

	printf("a = %1.20f\tb = %1.20f\tc = %1.20f\n",a,b,c);
	printf(" (a+b) + c = %1.20f + %1.20f = %1.20f\n", ab, c, abc1);
	printf(" a + (b+c) = %1.20f + %1.20f = %1.20f\n", a, bc, abc2);
}
