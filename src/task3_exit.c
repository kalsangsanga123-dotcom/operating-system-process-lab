#include <stdio.h>

int main(void) {
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);

	if (number >0) {
		printf("Sucess: positive number .\n");
		return 0;

	}
	printf("Failure: number is not positive.\n");
	return 1;

}
