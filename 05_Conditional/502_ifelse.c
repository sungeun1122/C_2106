#include <stdio.h>
#pragma warning(disable:4996)

/*
*	if(���ǽ�)
*		'��'�϶� ����
*	else
*		'����'�϶� ����
*
*
*	if(���ǽ�1)
*		���ǽ�1 �� '��' �϶� ����
*	else if (���ǽ�2)
*		���ǽ�2 �� '��' �϶� ����
*	else if (���ǽ�3)
*		���ǽ�3 �� '��' �϶� ����
*	..
*	else
*		�� ���ǽĵ� ��� �����϶� ����
*/

int main()
{
	int n = 47;

	if (n % 2 == 0)
	{
		// '��' �ϴ� �����ϴ� �ڵ�
		printf("¦�� �Դϴ�\n");
	}
	else
	{
		// '����' �϶� �����ϴ� �ڵ�
		printf("Ȧ�� �Դϴ�\n");
	}

	//--------------------------------------
	// if .. else if .. else if...

	double point = 0.7;

	if (point >= 4.0) {
		printf("A����\n");
	}
	else if (point >= 3.0) {
		printf("B����\n");
	}
	else if (point >= 2.0) {
		printf("C����\n");
	}
	else if (point >= 1.0) {
		printf("D����\n");
	}
	else {
		printf("F �Դϴ�\n");
	}





	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}