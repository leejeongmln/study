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
		printf("%d행 %d열에는", x, y);
		if (data[i] == 1) printf(" 검은 돌이 놓여져있습니다.\n");
		else if (data[i] == 2) printf(" 흰돌이 놓여져있습니다.\n");
		else printf("아무런 돌이 없습니다.\n");
	}
}