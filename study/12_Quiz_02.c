#include<stdio.h>

void main() {
	short data[9] = { 4,6,9,8,7,2,5,1,3 };		// 4 9 7 5 3 = 28
	int i, j;
	int sum = 0;

	for (i = 0; i < 9; i += 2) {			// i+=2 �ΰ��� ������Ŵ.
		sum = sum + data[i];	
	}
	printf("data �迭�� ¦�� �� ��ҿ� ����� �� : %d\n", sum);
}