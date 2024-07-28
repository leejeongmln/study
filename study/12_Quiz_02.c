#include<stdio.h>

void main() {
	short data[9] = { 4,6,9,8,7,2,5,1,3 };		// 4 9 7 5 3 = 28
	int i, j;
	int sum = 0;

	for (i = 0; i < 9; i += 2) {			// i+=2 두개씩 증가시킴.
		sum = sum + data[i];	
	}
	printf("data 배열의 짝수 번 요소에 저장된 값 : %d\n", sum);
}