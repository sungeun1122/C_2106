#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	// do ~ while
	// �ϴ� �ѹ� �����ϰ� ���� ���ǽ� �˻�

	int i = 1;
	while (i < 0) {
		printf("while ������\n");
	}

	i = 1;
	do {
		printf("do ~ while ������ %d\n", i);
	} while (i < 0); // �����ݷ� ��!


	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}