/*vong lap vo han*/
#include<stdio.h>
main()
{ int count = 0;
	while (count < 100)
	{
		printf("This goes on forever, HELP!!!\n");
		count += 10;
		printf("\t%d", count);
		count -= 10;
		printf("\t%d", count);
		printf("\Ctrl - C will help");
	}
}
