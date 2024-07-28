#include<stdio.h>

void main() {
	// int score = 92;
	int score = 80; // 80으로 설정하면, 작업 종료만 남게됨.
	char grade;

	if (score > 90) {
		grade = 'A';
		printf("점수는 %d 이고 등급은 %c 입니다. \n", score, grade);
	}
	printf("작업 종료");
}