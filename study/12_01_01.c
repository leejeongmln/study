#include <stdio.h>

void main() {
	/*short student[20];

	student[1] = 10;
	printf("%d\n", student[1]);*/


	// 1분 퀴즈 - int형으로 20개 요소의 배열을 만들고 초깃값 모두 0으로 저장 (단, for문 사용할 것.)
	int student[20];
	for (int i = 0; i < 20; i++) {
		student[i] = 0;
		printf("student[%d] = %d\n", i, student[i]);
	}

	printf("\n\n\n");

	// 쉼표를 사용한 배열 문법;
	int ArrayStudent[20] = { 0, };

	for(int j = 0; j<20; j++){
		printf("ArrayStudent[%d] = %d\n", j, ArrayStudent[j]);

	}
}