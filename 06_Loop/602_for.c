#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	// ������ 2�� ���
	// 2 x 1 = 2
	// 2 x 2 = 4
	// ..
	// 2 x 9 = 18
	// TODO

	int i;
	//for(i = 1; i < 10; i++)
	for (i = 1; i <= 9; i++)
	{
		printf("2 x %d = %d\n", i, i * 2);
	}

	printf("--��ȯ�� + ���ǹ� -----------------------\n");
	// 1 ~ 10 �� Ȧ���� ������ ����ϱ�
	// -1 2 -3 4 -5 6 -7 8 -9 10
	for (i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			printf("%d ", i);
		else
			printf("%d ", -i);
	}
	printf("\n");

	// 1 ~ n ������ ���� �ջ�
	{
		int n = 100;
		int sum = 0;

		for (int i = 1; i <= n; i++)
		{
			sum += i;  // ���� �ջ�
		}
		printf("sum = %d\n", sum);
	}


	// 1 ~ n ������ ���߿��� 3�� ����� �ջ�
	{
		int n = 100;
		int sum = 0;

		for (int i = 1; i <= n; i++)
		{
			if(i % 3 == 0)
				sum += i;  // ���� �ջ�
		}
		printf("sum = %d\n", sum);
	}



	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}