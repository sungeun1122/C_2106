#include <stdio.h>
#pragma warning(disable:4996)

/*
	중첩 순환문 (nested - loop)
*/

int main()
{
	// 구구단 2단 ~ 9단
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

	// 바깥 for :  2단 ~ 9단
	for (int dan = 2; dan <= 9; dan++)
	{
		printf("%d단\n", dan);
		// 안쪽 for : x1 ~ x9
		for(int mul = 1; mul <= 9; mul++){
			printf("%d x %d = %d\n", dan, mul, dan * mul);
		}		
		printf("\n");
	}

	// 위 구구단을 중첩 while문으로 만들기
	printf("------------------------------------\n");
	int dan, mul;
	dan = 2;
	while (dan <= 9) {
		printf("%d단\n", dan);
		mul = 1;
		while (mul <= 9) {
			printf("%d x %d = %d\n", dan, mul, dan * mul);
			mul++;
		}
		printf("\n");
		dan++;
	}




	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}