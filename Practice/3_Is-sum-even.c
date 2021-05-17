#include <stdio.h>

int main3() {
	int a, b, c;

	printf_s("Enter first number: ");
	scanf_s("%d", &a);
					
	printf_s("Enter second number: ");
	scanf_s("%d", &b);

	c = a + b;
	printf("The sum of %d and %d = %d\n", a, b, c);

	printf("Also,\n");

	if (c % 2 == 0) {
		printf("%d is an even number.", c);
	}

	else {
		printf("%d is an odd number.", c);
	}
}