#include<stdio.h>

void main() {
	char first_name[30];
	double Weight;
	double tall;
	char bload;
	int bload_count;

	printf("Human information input : (�̸�, ������, Ű, ������, �ɹڼ�)\n");
	scanf_s("%s %lf %lf %c %d", &first_name, &Weight, &tall, &bload, &bload_count);

	printf("�̸� : %s, ������ : %.1fkg, Ű : %.1fcm, ������ : %c��, �ɹڼ� : %dȸ", first_name, Weight, tall, bload, bload_count);
}

// �������� �ȳ���