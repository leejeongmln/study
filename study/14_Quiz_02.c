#include<stdio.h>

void main() {
	char First_input_string[10];
	fgets(First_input_string, 10, stdin);

	char Second_input_string[10];
	fgets(Second_input_string, 10, stdin);

	strcat(First_input_string, Second_input_string);

	printf(First_input_string);
}