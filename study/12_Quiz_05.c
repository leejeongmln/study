#include<stdio.h>

void main() {
	int data[7] ={6, 3, 9, 7, 2, 4, 1};
	int temp;
	int i, j;
	
	printf("정렬 전 :");
	for (i = 0; i < 7; i++) {
		printf("%d, ", data[i]);
	}
		


	for (i = 0; i < 6; i++) {
		for (j = i + 1; j < 7; j++) {
			if (data[i] > data[j]) {
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}

	printf("\n 정렬 후 : ");
	for (i = 0; i < 7; i++) {
		printf("%d, ", data[i]);

	}
}