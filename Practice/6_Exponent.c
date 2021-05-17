#include <stdio.h>

int main6() {
	int base, exponent, c, iteration;

	printf("Enter first number: ");
	scanf_s("%d", &base);

	printf("Enter second number: ");
	scanf_s("%d", &exponent);

	iteration = 0;
	c = 1;
	while (iteration <= exponent) {
		c = c * base;
		iteration = iteration + 1;
	}
	printf("The output is %d", c);
}