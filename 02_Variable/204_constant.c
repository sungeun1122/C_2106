#include <stdio.h>

/*
*	상수 (Constant)
*	한번 값이 정해지면 변경할수 없는 데이터
*	(변수의 반대)
*
*	방법1 : const 키워드 사용
*	방법2 : #define 사용
*/

#define MAX_VALUE 100

int main()
{
	printf("상수 (constant)\n");

	const int NUM = 10;  // int 타입의 상수 NUM 선언및 초기화
	//NUM = 200;  // 상수는 한번 값을 대입하면 변경 불가
			  // ※일반적으로 상수는 대문자로 작명.
	printf("NUM = %d\n", NUM);
	// ※VS rename : CTRL+R, CTRL+R
	
	printf("MAX_VALUE = %d\n", MAX_VALUE);

	//MAX_VALUE = 200;

	int a;
	a = 100;   // 100 (int)
	//100 = a;  // 코드상에 직접 입력하는 숫자, 문자 .. --> 'literal 상수'라 한다
	printf("%f", 3.141592);   // 3.1415912 (double)

	getchar();
	return 0;
}