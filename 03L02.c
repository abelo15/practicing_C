#include <stdio.h>

int integer_add(int x, int y)
{
	int result;
	result = x + y;
	return result;
}

int main(void)
{
	int sum;

	sum = integer_add(5, 12);
	printf("The addition of 5 and 12 is %d.\n", sum);
	return(0);
}
