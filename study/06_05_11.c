#include<stdio.h>

void main() {
	double data = 3.141592;

	printf("[%f]", data);
	printf("\n");
	printf("[%.4f]", data);
	printf("\n");
	printf("[%8.4f]", data);
	printf("\n");
	printf("[%-8.4f]", data);
}