#include <stdio.h>
#include <math.h>
int main()
{
	if ( (0.6/0.2) - 3.0 == 0.0)
//	if ( fabs((0.6/0.2)-3.0) <= 0.0000000000001)
	{
		printf("Equal to 0!\n");
	}
	else
	{
		printf("Not equal to 0!\n");
		printf("The value of 0.6 / 0.2 is %.25f\n",(0.6 / 0.2));
		printf("Hence, (0.6/0.2) - 3.0 = %.25f\n", (0.6 / 0.2)-3.0);
	}
}
