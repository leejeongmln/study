#include <stdio.h>

void main() {
	/*short student[20];

	student[1] = 10;
	printf("%d\n", student[1]);*/


	// 1�� ���� - int������ 20�� ����� �迭�� ����� �ʱ갪 ��� 0���� ���� (��, for�� ����� ��.)
	int student[20];
	for (int i = 0; i < 20; i++) {
		student[i] = 0;
		printf("student[%d] = %d\n", i, student[i]);
	}

	printf("\n\n\n");

	// ��ǥ�� ����� �迭 ����;
	int ArrayStudent[20] = { 0, };

	for(int j = 0; j<20; j++){
		printf("ArrayStudent[%d] = %d\n", j, ArrayStudent[j]);

	}
}