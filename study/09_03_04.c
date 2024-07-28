#include<stdio.h>

void main() {
	int num;
	int dan;
	int Result;

	for (dan = 1; dan < 10; dan++) {
		for (num = 1; num < 10; num++) {
			Result = dan * num;
			printf("%d X %d = %d\n", dan, num, Result);
		}
		printf("\n");
	}
}