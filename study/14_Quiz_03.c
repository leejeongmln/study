#include<stdio.h>

void main() {
	char first_name[30];
	double Weight;
	double tall;
	char bload;
	int bload_count;

	printf("Human information input : (이름, 몸무게, 키, 혈액형, 심박수)\n");
	scanf_s("%s %lf %lf %c %d", &first_name, &Weight, &tall, &bload, &bload_count);

	printf("이름 : %s, 몸무게 : %.1fkg, 키 : %.1fcm, 혈액형 : %c형, 심박수 : %d회", first_name, Weight, tall, bload, bload_count);
}

// 실행결과가 안나옴