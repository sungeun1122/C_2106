#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	int number[10];

	for (int i = 0; i < 10; i++) {
		scanf("%d", &number[i]);
	}

	int even = 0, odd = 0;
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			// Ȧ����°
			odd += number[i];
		}
		else {
			// ¦����°
			even += number[i];
		}
	}

	printf("sum : %d\n", even);
	printf("avg : %.1f\n", odd / 5.0);


	getchar();
	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}