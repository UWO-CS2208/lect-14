#include <stdio.h>

int main(){

	double a=0.2;
	double b=0.3;
	double c=0.4;
	double abc1 = (a*b)+(a*c);
	double abc2 = (a*(b+c));

	printf("a = %1.20f\tb = %1.20f\tc = %1.20f\n",a,b,c);
	printf(" (ab) + (ac) = %1.20f + %1.20f = %1.20f\n", a*b, a*c, abc1);
	printf("     a (b+c) = %1.20f * %1.20f = %1.20f\n", a, b*c, abc2);
}
