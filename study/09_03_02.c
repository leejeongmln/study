#include<stdio.h>

// for���� �Լ� ����Ͽ� ������ 2�� �����.
void gugu_2dan() {

	int dan = 2;
	int num;
	int Result = 0;
	for (num = 0; num < 10; num++) {
		Result = dan * num;
		printf("%d X %d = %d\n", dan, num, Result);
	}
}

// �Ű������� Ȱ���� ������ �����.
void gugu_dan(int dan) {
	int num;
	int Result = 0;

	for (num = 0; num < 10; num++) {
		Result = dan * num;
		printf("%d X %d = %d\n", dan, num, Result);
	}
}

void main() {
	gugu_2dan();
	printf("\n");
	gugu_dan(5);
}