#include<stdio.h>

void main() {
	// 09_01_01.c 대신 1분 퀴즈 
	// for문을 이용해서 1부터 100까지 더한 후 결과 값 출력

	int i ;
	int sum = 0;
	for (i = 1; i < 101; i++) {
		sum = sum + i;
	}
	printf("1부터 100까지 더한 값은 %d입니다.\n", sum);
}