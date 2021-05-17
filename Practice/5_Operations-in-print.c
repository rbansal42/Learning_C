#include <stdio.h>

int main5() {
	int a, b;

	printf("Enter first number: ");
	scanf_s("%d", &a);

	printf("Enter second number: ");
	scanf_s("%d", &b);

	printf("%d + %d = %d", a, b, a + b);
}