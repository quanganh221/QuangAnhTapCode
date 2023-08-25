//
// Creat by Nguyen Quang Anh on 5/17/23.
//
#include<stdio.h>

//int sizeof_demo()
int main()
{
	float r,c,s;
	printf("Ban kinh cua hinh tron la r= ");
	scanf("%f", &r);
	c=6.28*r; //2*pi*r
	s=3.14*r*r; //pi*r binh phuong
	printf("\n");
	printf("Ket qua tinh chu vi va dien tich hinh tron: \n");
	
	printf(" Bán kính hình tròn:			r=%8.1f met \n",r);
	printf(" Chu vi hình tròn:				c=%8.2f met \n", r);
	printf(" Dien tích hình tròn:			s=%8.2f met vuong \n", s);
	
//======== vi du 2 ========

	printf(" Data Type		\t | Size of byte \n");
	printf(" int 			\t | %d byte \n", sizeof(int));
	printf(" float			\t | %d byte \n", sizeof(float));
	printf(" usigned int	\t | %d byte \n", sizeof(unsigned int));
	printf(" short int		\t | %d byte \n", sizeof(short int));
	printf(" long int		\t | %d byte \n", sizeof(long int));
	printf(" double			\t | %d byte \n", sizeof(double));
	
return 1;
}
