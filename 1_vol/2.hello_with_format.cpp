#include<stdio.h>

int main() {

	printf("%s\n", "Hello, World!");

	printf("%s %s\n", "Hello", "1234");

	printf("%s %s\n", "Hello,", "1234");

	printf("%s, %s\n", "Hello", "1234");

	printf("%s, %s\n", "Hello,", "1234");

	printf("%s%s\n", "Hello", "1234");// %s �ΰ��� �پ�����

	printf("%s, %s\n", "Hello ", "1234"); //Hello�� ������ ����
	printf("%s, %s\n", "Hello", " 1234"); //1234�� ������ ����

	return 0;

}