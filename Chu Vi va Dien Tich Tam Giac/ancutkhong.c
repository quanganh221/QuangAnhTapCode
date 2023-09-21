#include<stdio.h>
float cv(float a, float b, float c);
float dt( float a, float b, float c);
void main() {
	float num1, num2, num3;
	printf("\nTinh CV Va DT Tam Giac");
	printf("\nCanh thu 1: ");
	scanf("%f", &num1);
	printf("\nCanh thu 2: ");
	scanf("%f", &num2);
	printf("\nCanh thu 3: ");
	scanf("%f", &num3);
	
	float result1 = cv(num1, num2, num3);
	printf("%f", result1);
	float result2 = dt(num1, num2, num3);
	printf("%f", result2);
}
float cv(float a, float b, float c){
	printf("\nChu Vi Hinh Tam Giac La: ");
	return (a+b+c);
}
float p;
float dt(float a, float b, float c){
	printf("\nDien Tich Tam Giac La: ");
	p = a + b + c;
	return sqrt(p*(p - a)*(p - b)*(p - c));
}
