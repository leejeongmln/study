#include<stdio.h>

void main() {
	int num = 0;
	while (1) {
		printf("input age : ");
		
		if (scanf_s("%d", &num) == 0) {
			rewind(stdin);
			printf("[Enter] digit number!! \n");
		}
		else {
			if (num > 0 && num <= 130) {	// 나이 범위에 해당하면, while 문 탈출
				break;
			}
			else {
				printf("Incorrect Age!! \n");	// 범위에 해당하지 않으면, 무한반복
			}
		}
	}
	printf("your age : %d\n", num);
}