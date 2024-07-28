#include<stdio.h>

void main() {
	char data[5] = { 1,2,3,4,5 };
	int result = 0;
	int i;

	char *p = data; // data = &data[0]

	for (i = 0; i < 5; i++) {
		result = result + *p;	// 1 더하고				그 다음 2			그 다음 3			그 다음 4 ...
		p++;	// p 증가
	}

	printf("data 배열의 각 요소의 합은 %d 입니다.\n", result);
}