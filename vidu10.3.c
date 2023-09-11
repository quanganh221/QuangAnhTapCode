#include<stdio.h>
#include<conio.h>
void main()
{
	int cnt = 0, num;
	do{
		printf("\nEnter a Number:");
		scanf("%d", &num);
		printf("No is %d", num);
		cnt++;
	} while (num != 0);
	printf("\nThe total numbers entered were %d", --cnt);
}
