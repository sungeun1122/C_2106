#include <stdio.h>

/*
*	��� (Constant)
*	�ѹ� ���� �������� �����Ҽ� ���� ������
*	(������ �ݴ�)
*
*	���1 : const Ű���� ���
*	���2 : #define ���
*/

#define MAX_VALUE 100

int main()
{
	printf("��� (constant)\n");

	const int NUM = 10;  // int Ÿ���� ��� NUM ����� �ʱ�ȭ
	//NUM = 200;  // ����� �ѹ� ���� �����ϸ� ���� �Ұ�
			  // ���Ϲ������� ����� �빮�ڷ� �۸�.
	printf("NUM = %d\n", NUM);
	// ��VS rename : CTRL+R, CTRL+R
	
	printf("MAX_VALUE = %d\n", MAX_VALUE);

	//MAX_VALUE = 200;

	int a;
	a = 100;   // 100 (int)
	//100 = a;  // �ڵ�� ���� �Է��ϴ� ����, ���� .. --> 'literal ���'�� �Ѵ�
	printf("%f", 3.141592);   // 3.1415912 (double)

	getchar();
	return 0;
}