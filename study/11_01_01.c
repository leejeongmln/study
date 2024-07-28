#include<stdio.h>

/// <1ºĞ ÄûÁî>
//	 int num = 5;	// Àü¿ª º¯¼ö
//	
//	int ReturnNum() {
//		num = 5;
//		return num;
//	}
//	
//	void main() {
//	
//		ReturnNum();
//		printf("%d", num);
//	
//	}
/// </1ºĞ ÄûÁî>

int Sum(int data1, int data2) {
	int result = data1 + data2;
	return result;
}

void main() {
	int result;
	result = Sum(5, 3);
	printf("5 + 3 = %d\n", result);
}

