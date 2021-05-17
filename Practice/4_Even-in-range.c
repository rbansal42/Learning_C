#include <stdio.h>

int main4() {

	int start, end, n;

	printf("This program will find all the even numbers in the specified range.\n");
	printf("To begin, enter: \n");

	printf("First number of the range: ");
	scanf_s("%d", &start);

	printf("Last number of the range: ");
	scanf_s("%d", &end);

	if (start > end) {
		printf("Invalid input. Is the starting value grater than the ending value?\n");
		return(0);
	}

	else if (start % 2 == 0) {
		n = start;
	}

	else {
		n = start + 1;
	}

	while (n <= end) {

		printf("%d\t", n);
		n = n + 2;
	}

}