#include<stdio.h>

void main() {
	char name[30];
	int korean_score_1;
	int math_score_1;
	int english_score_1;

	printf("1 번째 학생 이름 : ");
	scanf_s("%s\n", &name);
	printf("국어 점수 : ");
	scanf_s("%d\n", &korean_score_1);
	printf("영어 점수 : ");
	scanf_s("%d\n", &math_score_1);
	printf("수학 점수 : ");
	scanf_s("%d\n", &english_score_1);

	int first_score_sum = korean_score_1 + math_score_1 + english_score_1;


}