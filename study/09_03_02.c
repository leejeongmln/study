#include<stdio.h>

// for문과 함수 사용하여 구구단 2단 만들기.
void gugu_2dan() {

	int dan = 2;
	int num;
	int Result = 0;
	for (num = 0; num < 10; num++) {
		Result = dan * num;
		printf("%d X %d = %d\n", dan, num, Result);
	}
}

// 매개변수를 활용한 구구단 만들기.
void gugu_dan(int dan) {
	int num;
	int Result = 0;

	for (num = 0; num < 10; num++) {
		Result = dan * num;
		printf("%d X %d = %d\n", dan, num, Result);
	}
}

void main() {
	gugu_2dan();
	printf("\n");
	gugu_dan(5);
}