#include <stdio.h>
#pragma warning(disable:4996)

// 함수를 사용하는 코드
// 사용하고자 하는 함수의 선언이 담긴 header 를 include 한다
#include "myfunction.h"  

int main()
{
	printf("MAX = %d\n", MAX);

	Data i = 3, j = 4;
	printf("power() 결과 : %d\n", power(i, j)); // 함수 사용(호출)
	printf("doubleUp() 결과 : %.1f\n", doubleUp(j));  // 호출


	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}