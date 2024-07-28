#include <stdio.h>

int Sum(int value1, int value2) {
	int result = value1 + value2;
	return result;
}

void main() {
	int a = 2;
	int b = 3;

	int value = Sum(a, b);

	printf("´õÇÑ °ª : %d", value);
}