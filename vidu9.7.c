	/*								ECHO PROGRAM							*/
/* A program to accept input data from the console and print it on the screen */
				/*End of data is indicated by pressing '^Z'*/
#include<stdio.h>
main()
{
	char ch;
	while ((ch = getchar()) != EOF);
	{
		putchar(ch);
	}
}
