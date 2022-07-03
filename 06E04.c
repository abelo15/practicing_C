#include <stdio.h>

int main(void)
{
	int x;
	x = 1;

	printf("x++ produces: %d.\n", x++);
	printf("Now x contains: %d.\n", x);
	printf("x = x++ produces: %d.\n", x = x++);
	printf("Now x contains: %d.\n", x);
	return(0);
}
