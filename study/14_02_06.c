#include<stdio.h>

int GetMyString(char buffer[], int limit) {
	int i;
	for (i = 0; i < limit; i++) {
		buffer[i] = getchar();
		// ���� �Է� ����
		if (buffer[i] = '\n') {
			buffer[i] = 0;
			return 1;
		}
	}

	// �Է� ���� �ʰ� ����
	buffer[i] = 0;
	rewind(stdin);
	return 0;
}

void main() {
	char temp[10];

	int state;

	state = GetMyString(temp, 9);		// 9���� �Է� ����

	if (state == 1)printf("input : %s\n", temp);		// ���� ����
	else printf("input : %s -> out of range\n", temp);		// ����
}