#include <stdio.h>
#pragma warning(disable:4996)

void bbb() {
	printf("5) bbb() �Լ� ����\n");
	printf("6) bbb() �Լ� ����\n");
}

void aaa() {
	printf("3) aaa() �Լ� ����\n");
	bbb(); // bbb() ȣ��
	printf("4) aaa() �Լ� ����\n");
}


int main()
{
	printf("1) main() �Լ� ����\n");

	aaa(); // aaa() ȣ��

	printf("2) main() �Լ� ����\n");

	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}