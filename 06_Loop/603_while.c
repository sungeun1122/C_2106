#include <stdio.h>
#pragma warning(disable:4996)

/*
* 조건식이 '참' 인 동안 while 블럭 반복
*
*	while(조건식){
*		..
*		..
*	}
*
*/

int main()
{
	int i = 0;
	while (i < 5)
	{
		printf("i = %d\n", i);
		i++;
	}
	printf("while 종료후 i 값은 %d\n", i);

	// for <---> while
	for (i = 0; i < 5; i++) {
		printf("i = %d\n", i);
	}

	printf("------\n");

	// while문으로 구구단 2단 출력
	// 2 x 1 = 2
	// 2 x 2 = 4
	// ..
	// 2 x 9 = 18

	i = 1;
	while (i <= 9)
	{
		printf("2 x %d = %d\n", i, i * 2);
		i++;
	}


	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}