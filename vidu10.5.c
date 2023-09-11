#include<stdio.h>
#include<conio.h>
void main()
{
	int cnt;
	for (cnt = 1; cnt <= 10; cnt++)
	{
		if (cnt == 5)
		continue;
		printf("%d\t", cnt);
	}
}
