#include <stdio.h>

int main1() {
	
	int a, b, c;
	
	printf("Enter 1st number: ");
	scanf_s("%d", &a);

	printf("Enter 2nd number: ");
	scanf_s("%d", &b);
	
	c = a + b;

	printf("%d + %d = %d", a, b, c);
	
}

