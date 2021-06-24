#include <stdio.h>
#pragma warning(disable:4996)

// break, continue

// 순환문 안에서 break를 만나면, 자기를 감싸는 가장 가까운 순환문 종료.
// 순환문 안에서 continue를 만나면, 자기를 감싸는 가장 가까운 순환문 으로 돌아감


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
	// 바깥 for :  2단 ~ 9단
	for (int dan = 2; dan <= 9; dan++)
	{
		printf("%d단\n", dan);
		// 안쪽 for : x1 ~ x9
		for (int mul = 1; mul <= 9; mul++) {
			printf("%d x %d = %d\n", dan, mul, dan * mul);

			if (mul == dan) break;

		}
		printf("\n");
	}


	printf("----------------------\n");
	// 바깥 for :  2단 ~ 9단
	for (int dan = 2; dan <= 9; dan++)
	{
		printf("%d단\n", dan);
		// 안쪽 for : x1 ~ x9
		for (int mul = 1; mul <= 9; mul++) {

			if (dan > mul) continue;

			printf("%d x %d = %d\n", dan, mul, dan * mul);

		}
		printf("\n");
	}



	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}