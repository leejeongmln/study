#include<stdio.h>

int GetMyString(char buffer[], int limit) {
	int i;
	for (i = 0; i < limit; i++) {
		buffer[i] = getchar();
		// 정상 입력 성공
		if (buffer[i] = '\n') {
			buffer[i] = 0;
			return 1;
		}
	}

	// 입력 버퍼 초과 오류
	buffer[i] = 0;
	rewind(stdin);
	return 0;
}

void main() {
	char temp[10];

	int state;

	state = GetMyString(temp, 9);		// 9개의 입력 제한

	if (state == 1)printf("input : %s\n", temp);		// 정상 성공
	else printf("input : %s -> out of range\n", temp);		// 오류
}