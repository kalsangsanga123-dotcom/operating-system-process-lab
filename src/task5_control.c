#include<stdio.h>

int main(void) {
	int choice;
	printf("Enter 1 to continue or 0 to exit");
	scanf("%d", &choice);

	if (choice ==1) {
		printf("Progarm continued sucessfully.\n");
		return 0;
	}

	printf("Progarm temrinated by the user. \n");
	return 1;
}
