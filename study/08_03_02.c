#include<stdio.h>

void main() {
	//int score = 92;

	int score;
	char grade;
	printf("���� �Է� : ");
	scanf_s("%d", &score);

	if (score > 90) {
		grade = 'A';
		printf("������ %d �̰� ����� %c�Դϴ�.\n", score, grade);
	}
	else {
		grade = 'B';
		printf("������ %d �̰� ����� %c�Դϴ�.\n", score, grade);
	}
	printf("�۾� ����");
}