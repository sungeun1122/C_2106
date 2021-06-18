#include <stdio.h>
#pragma warning(disable:4996)

// 비트 연산자 (bit operator)
// & : AND 연산자 
// | : OR 연산자
// ^ : XOR 연산자
// ~ : NOT 연산자
// <<, >> : SHIFT 연산자

int main()
{
	int num1 = 120, num2 = 26;
	int result;

	// & bit 연산자
	result = num1 & num2;
	printf("%d & %d = %d\n", num1, num2, result);

	// 0111 1000 (120)
	// 0001 1010 (26)
	//---------- &
	// 0001 1000 (24)

	// | 비트 연산자
	result = num1 | num2;
	printf("%d | %d = %d\n", num1, num2, result);

	// 0111 1000 (120)
	// 0001 1010 (26)
	//---------- |
	// 0111 1010

	// ^ : XOR 비트 연산자 (eXclusive OR : 배타적 논리합)
	// 같으면 0,  다르면 1
	result = num1 ^ num2;
	printf("%d ^ %d = %d\n", num1, num2, result);

	// 0111 1000 (120)
	// 0001 1010 (26)
	//---------- ^
	// 0110 0010 (98)

	// ~ : NOT 비트 연산자
	// 비트 반전  1 ↔ 0
	result = ~num1;
	printf("~%d = %d\n", num1, result);
	/*
	0000 0000 0000 0000 0000 0000 0111 1000 (120)
	────────────────────────────────────────  ~
	1111 1111 1111 1111 1111 1111 1000 0111 (-121)
	*/

	char b = 127;  // b : 0111 1111 (127)
	b += 1;        // b : 1000 0000 (-128)
	printf("b = %d\n", b);
	b = -1;        // b : 1111 1111 (-1)
	b += 1;        // b : 0000 0000 (0)
	printf("b = %d\n", b);

	// <<, >>  shift 연산자
	// bit 단위 이동
	num1 = 10;
	result = num1 << 2;  // 비트단위 왼쪽으로 2자리 이동 (시프트)
	printf("%d << 2 = %d\n", num1, result);

	// 0000 1010 (10)
	// ↙-------- << 2
	// 0010 1000 (40)


	result = num1 >> 1;
	printf("%d >> 1 결과 : %d\n", num1, result);

	// 단순히 2의 멱승으로 곱할 경우 * 연산보다 << 연산의 속도가 월등히 빠름
	result = num1 * 2;
	result = num1 << 1;

	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}

/*
프로그래밍 실력은 곧 디버깅 실력이다!

디버깅 순서
	breakpoint 잡기 (F9)
	디버깅 시작 (F5)
	한줄씩 실행 (F10)
	다음 breakpoint까지 진행 (F5)
	디버깅 종료 (SHIFT + F5)

디버깅 하면서 확인할것
	프로그램의 흐름
	변수값의 변화
	함수 호출관계
*/
