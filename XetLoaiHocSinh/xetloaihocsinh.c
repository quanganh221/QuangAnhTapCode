#include<stdio.h>

char grade(int a);

int main() {
	int marks;
	printf("\nEnter Marks: ");
	scanf("%d", &marks);
	
	char result = grade(marks);
	printf("\nYour grade is: %c", result);
	
}
char grade(int a){
	
	char b;
	
	if(a >= 90){
		b = 'A';
	}
	else if(a >= 80){
		b = 'B';
	}
	else if(a >= 70){
		b = 'C';
	}
	else if(a >= 60){
		b = 'D';
	}
	else{
		b = 'F';
	}
	return b;
}
