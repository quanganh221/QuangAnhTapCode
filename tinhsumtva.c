#include <stdio.h>

int main() {
	float t, v, a, sum;
	printf("\bNhap diem Toan Van Anh: ");
	scanf("%f", &t);
	scanf("%f", &v);
	scanf("%f", &a);
	sum = t*2 + v*2 + a;
	
	if(sum >= 40) {
		printf("You Pass");
	}
	else {
		printf("You Fail");
	}

	return 0;
}

