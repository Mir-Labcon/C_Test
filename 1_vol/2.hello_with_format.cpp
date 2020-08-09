#include<stdio.h>

int main() {

	printf("%s\n", "Hello, World!");

	printf("%s %s\n", "Hello", "1234");

	printf("%s %s\n", "Hello,", "1234");

	printf("%s, %s\n", "Hello", "1234");

	printf("%s, %s\n", "Hello,", "1234");

	printf("%s%s\n", "Hello", "1234");// %s 두개가 붙어있음

	printf("%s, %s\n", "Hello ", "1234"); //Hello에 공백을 넣음
	printf("%s, %s\n", "Hello", " 1234"); //1234에 공백을 넣음

	return 0;

}