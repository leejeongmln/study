#include<stdio.h>

void main() {
	// 09_01_01.c ��� 1�� ���� 
	// for���� �̿��ؼ� 1���� 100���� ���� �� ��� �� ���

	int i ;
	int sum = 0;
	for (i = 1; i < 101; i++) {
		sum = sum + i;
	}
	printf("1���� 100���� ���� ���� %d�Դϴ�.\n", sum);
}