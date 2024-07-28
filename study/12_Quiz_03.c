#include<stdio.h>

void main() {
	short data[9] = { 4,6,9,8,7,2,5,1,3 };

	int max=0;
	int i;

	for (int i = 0; i < 9; i++) {
		if (max < data[i]) max = data[i];
	}

	printf("배열에서 가장 큰 값은 %d 이다.", max);
}