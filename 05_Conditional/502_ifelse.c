#include <stdio.h>
#pragma warning(disable:4996)

/*
*	if(조건식)
*		'참'일때 수행
*	else
*		'거짓'일때 수행
*
*
*	if(조건식1)
*		조건식1 이 '참' 일때 수행
*	else if (조건식2)
*		조건식2 가 '참' 일때 수행
*	else if (조건식3)
*		조건식3 가 '참' 일때 수행
*	..
*	else
*		위 조건식들 모두 거짓일때 수행
*/

int main()
{
	int n = 47;

	if (n % 2 == 0)
	{
		// '참' 일대 수행하는 코드
		printf("짝수 입니다\n");
	}
	else
	{
		// '거짓' 일때 수행하는 코드
		printf("홀수 입니다\n");
	}

	//--------------------------------------
	// if .. else if .. else if...

	double point = 0.7;

	if (point >= 4.0) {
		printf("A학점\n");
	}
	else if (point >= 3.0) {
		printf("B학점\n");
	}
	else if (point >= 2.0) {
		printf("C학점\n");
	}
	else if (point >= 1.0) {
		printf("D학점\n");
	}
	else {
		printf("F 입니다\n");
	}





	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}