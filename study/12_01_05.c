#include<stdio.h>

void main() {
	char data[5] = { 1,2,3,4,5 };

	int result = 0;
	int i;

	for (i = 0; i < 5; i++) {
		result = result + data[i];
	}

	printf("data 배열의 각 요소의 합은 %d 입니다.", result);
}