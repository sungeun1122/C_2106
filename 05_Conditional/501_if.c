#include <stdio.h>
#pragma warning(disable:4996)

/*
*	��� (Control) : ���α׷��� �帧�� ����(����)
*	1. ���ǹ�(Conditional)
*	: if ~ else, switch ~ case
*
*	2. ��ȯ��(loop)
*	: for, while, do ~ while
*/

int main()
{
	//if(���ǽ�) <-- ���ǽ��� '��'�̸�
	//      �� ������ '�� ����' Ȥ�� '�� ��' �� �����Ų��
	//      '����'�̸� �������� �ʰ� �Ѿ��

	int n = 24;

	// n �� ¦���̸� "¦���Դϴ�" ���
	if (n % 2 == 0)
		printf("¦���Դϴ�\n");

	// n �� 3�� ����̸� "3�� ����Դϴ�" ��� ���
	if (n % 3 == 0)
	{
		// �� ���ǽ��� '��' �϶� �����ϴ� ��
		printf("%d �� ", n);
		printf("3�� ����Դϴ�\n");
	}

	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}