#include <stdio.h>
#pragma warning(disable:4996)

/*
	���� : 804�� �迭�� �ִ밪, �ּҰ� ���ϱ�
*/

int main()
{
	char szInput[3][100];
	char szFirst[100];

	for (int i = 0; i < 3; i++) {
		scanf("%s", szInput + i);
	}


	strcpy(szFirst, szInput[0]);

	for (int i = 1; i < 3; i++) {
		if (strcmp(szFirst, szInput[i]) > 0) {
			strcpy(szFirst, szInput[i]);
		}
	}
	printf("%s\n", szFirst);

	getchar();
	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}