#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	// 구구단 2단 출력
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

	printf("--순환문 + 조건문 -----------------------\n");
	// 1 ~ 10 중 홀수만 음수로 출력하기
	// -1 2 -3 4 -5 6 -7 8 -9 10
	for (i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			printf("%d ", i);
		else
			printf("%d ", -i);
	}
	printf("\n");

	// 1 ~ n 까지의 수를 합산
	{
		int n = 100;
		int sum = 0;

		for (int i = 1; i <= n; i++)
		{
			sum += i;  // 누적 합산
		}
		printf("sum = %d\n", sum);
	}


	// 1 ~ n 까지의 수중에서 3의 배수만 합산
	{
		int n = 100;
		int sum = 0;

		for (int i = 1; i <= n; i++)
		{
			if(i % 3 == 0)
				sum += i;  // 누적 합산
		}
		printf("sum = %d\n", sum);
	}



	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}