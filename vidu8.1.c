#include<stdio.h>
#include<conio.h>
void main()
{ float com = 0, sales_amt;
printf("Enter the Sales Amount: ");
scanf("%f", &sales_amt);
if (sales_amt >= 10000)
	com = sales_amt * 0.1;
	printf("\nCommission = %f", com);
}
