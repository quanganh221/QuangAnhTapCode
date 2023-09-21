//
// Creat by Anh Trinh 20/9/23
//


#include<stdio.h>

void displayMenu();
void placeorder(char option);
float calculateTotalCost(char option, int quantity);

int main() {
	char option;
	int quantity;
	
	do {
		displayMenu();
		printf("\nEnter your option: ");
		scanf("%c", &option);
		if (option != 'd') {
			printf("\nEnter the quantity: ");
			scanf("%d", &quantity);
			placeorder(option);
			float totalCost = calculateTotalCost(option, quantity);
			printf("Total cost: $%.2f\n\n", totalCost);
		}
	} while (option != 'd');
	return 0;
}

void displayMenu() {
	printf("************ Coffee Quang Anh ************\n");
	printf("a.Espresso - $2.50\n");
	printf("b.Cappuccino - $3.00\n");
	printf("c.Latte - $3.50\n");
	printf("d.Quit\n");
}

void placeorder(char option){
	switch(option) {
		case 'a':
			printf("Placing order: Espresso\n");
			break;
		case 'b':
			printf("Placing order: Cappuccino\n");
			break;
		case 'c':
			printf("Placing order: Latte\n");
			break;
		default:
			printf("Invalid option. Please try agian.\n");
	}
}

float calculateTotalCost(char option, int quantity){
	float price;
	
	switch(option){
		case 'a':
			price = 2.50;
			break;
		case 'b':
			price = 3.00;
			break;
		case 'c':
			price = 3.50;
			break;
		default:
			price = 0.00;
	}
	
	return price * quantity;
}
