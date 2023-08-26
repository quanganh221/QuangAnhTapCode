#include<stdio.h>

void main()
{
	char line[80]; /* line [80] là mot mang luu 80 ky tu */
	printf("Please enter the data\n");
	scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]", line);
	printf("\nThe values accepted are: %s", line);
	
	return 0;
}
