#include <stdio.h>

int main(void)
{
	int c;
	c = ' ';

	printf("Pleasse enter a letter.\n(To exit enter \"k\")\n");

		while(c != 'k')
		{ 
			c = getc(stdin);
			putchar(c);
		}

	printf("\nOut of the while loop. Bye!");
	return(0);
}

