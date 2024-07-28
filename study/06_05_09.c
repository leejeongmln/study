#include<stdio.h>

void main() {

	// 출력 칸수 조절
	int data = 7;

	printf("[%d] [%2d]", data, data);
	printf("\n");
	printf("[%5d]", data);
	printf("\n");
	printf("[%-5d]", data);
}