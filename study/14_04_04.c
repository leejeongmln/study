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
			if (num > 0 && num <= 130) {	// ���� ������ �ش��ϸ�, while �� Ż��
				break;
			}
			else {
				printf("Incorrect Age!! \n");	// ������ �ش����� ������, ���ѹݺ�
			}
		}
	}
	printf("your age : %d\n", num);
}