#include <stdio.h>
#pragma warning(disable:4996)

// ���� �Ǽ��ϴ� �͵�

#define GOOD 1
#define BAD 0

int main()
{
	if (10 < 4);  // ���ǹ� �ڿ� ; �� �ٷ� ������ ����!
	{
		printf("����Ǹ� �ȵǿ�\n");
	}

	int isGood = BAD;
	if (isGood = GOOD) // �񱳿����� ==  vs. ���Կ����� =  ȥ������ ����!
	{
		printf("���մϴ�\n");
	}
	else {
		printf("���޴ϴ�\n");
	}



	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}