#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	// ���� ������
	// ( ���ǽ� ) ? (���ΰ�� ���) : (������ ��� ���)

	int result;
	result = (10 > 3) ? 200 : -100;
	printf("result = %d\n", result); // 200

	result = (10 < 3) ? 200 : -100;
	printf("result = %d\n", result); // -100

	int a = 45;
	int b = 60;
	// a �� b�� ���հ���(difference)?
	int diff = (a > b) ? (a - b) : (b - a);
	printf("diff = %d\n", diff);


	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}