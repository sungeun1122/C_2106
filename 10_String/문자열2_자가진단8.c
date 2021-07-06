#include <stdio.h>
#pragma warning(disable:4996)

/*
	참조 : 804번 배열의 최대값, 최소값 구하기
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
	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}