#include <stdio.h>
#pragma warning(disable:4996)

// �Լ��� ����ϴ� �ڵ�
// ����ϰ��� �ϴ� �Լ��� ������ ��� header �� include �Ѵ�
#include "myfunction.h"  

int main()
{
	printf("MAX = %d\n", MAX);

	Data i = 3, j = 4;
	printf("power() ��� : %d\n", power(i, j)); // �Լ� ���(ȣ��)
	printf("doubleUp() ��� : %.1f\n", doubleUp(j));  // ȣ��


	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}