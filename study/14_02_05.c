#include<stdio.h>

void main() {
	char input_string[10];

	if (NULL != gets(input_string)) {		// gets()�� NULL�� �ƴ϶��,
		printf("input : %s\n", input_string);
	}
	else {		// ctrl + c (���α׷� ����) �� ������ ��
		printf("input : Canceled");
	}
}

// ���� gets() �Լ��� ���ǵǾ����� �ʴٸ�,
// if(NULL != fgets(input_string, 10, stdin)) ����ϸ� ��.