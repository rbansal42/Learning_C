#include <stdio.h>

void main2() {
	int a, b, c;

	printf("Enter the first number: ");
	scanf_s("%d", &a);

	printf("Enter the second number: ");
	scanf_s("%d", &b);
	
	c = a - b;

	printf("The subtracted value of %d and %d is: %d", a, b, c);

}