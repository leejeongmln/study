#include<stdio.h>
#include<string.h>

void main() {

	int data_length;
	char data[10] = "happy";
	data_length = strlen(data);

	printf("data length = %d\n", data_length);


	char aData[10] = {'a','b','c',0};
	char result[16];

	strcpy(result, aData);		// �ƹ��͵� ���� result�� aData �� �ֱ�.
	strcat(result, "def");

	printf("%s + \"def\" = %s\n", aData, result);
}