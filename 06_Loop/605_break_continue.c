#include <stdio.h>
#pragma warning(disable:4996)

// break, continue

// ��ȯ�� �ȿ��� break�� ������, �ڱ⸦ ���δ� ���� ����� ��ȯ�� ����.
// ��ȯ�� �ȿ��� continue�� ������, �ڱ⸦ ���δ� ���� ����� ��ȯ�� ���� ���ư�


int main()
{
	int i;
	for (i = 1;; i++) {
		if (i % 7 == 0) {
			break;
		}

		printf("i = %d\n", i);
	}
	printf("--------------------\n");
	i = 0;
	while (i <= 10) {
		i++;

		if (i % 2 == 0) {
			continue;
		}

		printf("i = %d\n", i);
	}


	printf("----------------------\n");
	// �ٱ� for :  2�� ~ 9��
	for (int dan = 2; dan <= 9; dan++)
	{
		printf("%d��\n", dan);
		// ���� for : x1 ~ x9
		for (int mul = 1; mul <= 9; mul++) {
			printf("%d x %d = %d\n", dan, mul, dan * mul);

			if (mul == dan) break;

		}
		printf("\n");
	}


	printf("----------------------\n");
	// �ٱ� for :  2�� ~ 9��
	for (int dan = 2; dan <= 9; dan++)
	{
		printf("%d��\n", dan);
		// ���� for : x1 ~ x9
		for (int mul = 1; mul <= 9; mul++) {

			if (dan > mul) continue;

			printf("%d x %d = %d\n", dan, mul, dan * mul);

		}
		printf("\n");
	}



	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}