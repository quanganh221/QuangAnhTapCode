#include<stdio.h>

void main()
{
	int i;
	float x;
	char c;
	printf("Plese enter the data\n");
	scanf("%3d %5f %c", &i, &x, &c);
	printf("\nThe values accepted are: %3d, %5f, %c", i, x, c);
	
	return 0;
}
