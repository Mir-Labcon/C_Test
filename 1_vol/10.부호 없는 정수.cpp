#include<stdio.h>

int main() {

	unsigned char num1 = 200; //1����Ʈ ��ȣ���� ������
	
	unsigned short num2 = 60000; //2����Ʈ ��ȣ���� ������
	
	unsigned int num3 = 4123456789; //4����Ʈ ��ȣ���� ������
	
	unsigned long num4 = 4123456789; //4����Ʈ ��ȣ���� ������
	
	unsigned long long num5 = 12345678901234567890; //8����Ʈ ��ȣ���� ������

	printf("%u %u %u %lu %llu\n", num1, num2, num3, num4, num5);

	return 0;
}