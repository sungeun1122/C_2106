#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	// 삼항 연산자
	// ( 조건식 ) ? (참인경우 결과) : (거짓인 경우 결과)

	int result;
	result = (10 > 3) ? 200 : -100;
	printf("result = %d\n", result); // 200

	result = (10 < 3) ? 200 : -100;
	printf("result = %d\n", result); // -100

	int a = 45;
	int b = 60;
	// a 와 b의 차잇값은(difference)?
	int diff = (a > b) ? (a - b) : (b - a);
	printf("diff = %d\n", diff);


	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}