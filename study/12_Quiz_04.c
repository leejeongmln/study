#include<stdio.h>

void main() {
	char data[12] = { 0,0,0,0,0,0,0,0,0,0,0,0 };

	data[5] = 1;
	data[11] = 2;

	int x, y;
	int i;

	for (i = 0; i < 12; i++) {
		x = i / 4 + 1;
		y = i % 4 + 1;
		printf("%d�� %d������", x, y);
		if (data[i] == 1) printf(" ���� ���� �������ֽ��ϴ�.\n");
		else if (data[i] == 2) printf(" ���� �������ֽ��ϴ�.\n");
		else printf("�ƹ��� ���� �����ϴ�.\n");
	}
}