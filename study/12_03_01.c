#include <stdio.h>

void main() {
	char data[12] = { 0,0,2,0,1,1,0,0,2,1,0,2 };

	int i, x, y;

	for (i = 0; i < 12; i++) {
		x = i % 4 + 1;	// 열 번호
		y = i / 4 + 1;	// 행 번호

		printf("%d행 %d열에", y, x);
		if (data[i] == 1) printf(" 검은돌이 놓여있습니다.\n");
		else if (data[i] == 2) printf(" 흰 돌이 놓여있습니다.\n");
		else printf(" 는 돌이 놓여있지 않습니다.\n");
	}
}