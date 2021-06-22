#include <stdio.h>
#pragma warning(disable:4996)

// 많이 실수하는 것들

#define GOOD 1
#define BAD 0

int main()
{
	if (10 < 4);  // 조건문 뒤에 ; 를 바로 붙이지 말자!
	{
		printf("실행되면 안되요\n");
	}

	int isGood = BAD;
	if (isGood = GOOD) // 비교연산자 ==  vs. 대입연산자 =  혼돈하지 말자!
	{
		printf("착합니다\n");
	}
	else {
		printf("나쁩니다\n");
	}



	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}