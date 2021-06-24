#include <stdio.h>
#pragma warning(disable:4996)

/*
	��ø ��ȯ�� (nested - loop)
*/

int main()
{
	// ������ 2�� ~ 9��
	// 2 x 1 = 2
	// ..
	// 2 x 9 = 18

	// 3 x 1 = 3
	// ..
	// 3 x 9 = 27
	// ...
	// 9 x 1 = 9
	// ..
	// 9 x 9 = 81

	// �ٱ� for :  2�� ~ 9��
	for (int dan = 2; dan <= 9; dan++)
	{
		printf("%d��\n", dan);
		// ���� for : x1 ~ x9
		for(int mul = 1; mul <= 9; mul++){
			printf("%d x %d = %d\n", dan, mul, dan * mul);
		}		
		printf("\n");
	}

	// �� �������� ��ø while������ �����
	printf("------------------------------------\n");
	int dan, mul;
	dan = 2;
	while (dan <= 9) {
		printf("%d��\n", dan);
		mul = 1;
		while (mul <= 9) {
			printf("%d x %d = %d\n", dan, mul, dan * mul);
			mul++;
		}
		printf("\n");
		dan++;
	}




	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}