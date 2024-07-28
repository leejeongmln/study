#include<stdio.h>

void main() {
	char input_string[10];

	if (NULL != gets(input_string)) {		// gets()가 NULL이 아니라면,
		printf("input : %s\n", input_string);
	}
	else {		// ctrl + c (프로그램 중지) 를 눌렀을 시
		printf("input : Canceled");
	}
}

// 만약 gets() 함수가 정의되어있지 않다면,
// if(NULL != fgets(input_string, 10, stdin)) 사용하면 됨.