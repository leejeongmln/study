#include<stdio.h>

/// <1�� ����>
//	 int num = 5;	// ���� ����
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
/// </1�� ����>

int Sum(int data1, int data2) {
	int result = data1 + data2;
	return result;
}

void main() {
	int result;
	result = Sum(5, 3);
	printf("5 + 3 = %d\n", result);
}

