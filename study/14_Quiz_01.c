#include<stdio.h>

void main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	printf("first number : ");
	scanf_s("%d", &num1);

	printf("second number : ");
	scanf_s("%d", &num2);

	printf("third number : ");
	scanf_s("%d", &num3);

	printf("avg : %d\n", (num1 + num2 + num3) / 3);
}