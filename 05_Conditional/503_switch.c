#include <stdio.h>
#pragma warning(disable:4996)

/*

switch(����)
{
case n1:
	...
	break;
case n2:
	...
	break;

...

default:
	...
	break;
}
*/

int main()
{
	int n = 1;

	switch (n)
	{
	case 1:  // �� n ���� 1 �� ��� ���� �ڵ� ����
		printf("n ���� 1 �Դϴ�\n");
		break;   // switch �� ����
	case 2:
		printf("n ���� 2 �Դϴ�\n");
		break;
	case 3:
		printf("n ���� 3 �Դϴ�\n");
		break;
	}

	// TODO :  n���� ¦���̸� "¦���Դϴ�" ���
	// Ȧ���̸� "Ȧ���Դϴ� " ���
	// switch ~ case �� ���
	n = 34;
	switch (n % 2)
	{
	case 0:
		printf("¦���Դϴ�\n");
		break;
	case 1:
		printf("Ȧ���Դϴ�\n");
		break;
	}

	// 4���� -> A
	// 3���� -> B
	// 2���� -> C
	// 1���� -> D
	// �� ���� -> F
	double point = 0.7;

	switch ((int)point)   // (int)�Ǽ� -> intŸ�� ��ȯ, 3.5 => 3 (�Ҽ��� ���ŵ�)
	{
	case 4:  // 4.0 <=  point < 5.0
		printf("A����\n"); break;
	case 3:
		printf("B����\n"); break;
	case 2:
		printf("C����\n"); break;
	case 1:
		printf("D����\n"); break;
	default:  // �� ��� case �� �ش����� �ʴ� ���
		printf("�̹� �б�� �۷���..\n");
	}


	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}