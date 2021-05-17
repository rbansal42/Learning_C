#include <stdio.h>

int main8() {
	int input, i;

	printf("Enter a number to check if it's prime or not: ");
	scanf_s("%d", &input);
	i = 0;

	while (i <= input / 2) {

		if (input % i == 0) {
			printf("False");
			return(0);
		}

		i = i + 1;
		
	}
	printf("True");
	return(0);
}