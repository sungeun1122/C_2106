#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	// 10���� ���� �Է¹ޱ�
	int n;
	int mul3 = 0, mul5 = 0;   // 3�� ����� ����, 5�ǹ���� ����.
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		if (n % 3 == 0) mul3++;
		if (n % 5 == 0) mul5++;
	}

	printf("Multiples of 3 : %d\n", mul3);
	printf("Multiples of 5 : %d\n", mul5);

	getchar();

	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}