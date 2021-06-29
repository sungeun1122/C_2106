#include <stdio.h>
#pragma warning(disable:4996)

/*
*	재귀호출 (Recursive Call)
*	- 함수가 실행중에 자신을 다시 호출하는 것.
*   - 복잡한 문제를 단순화하여 구현하는 장점
*	- 무한한 재귀호출은 불가
*/

// n! = n * (n - 1) * (n - 2) * ...  * 1
//    = n * (n - 1)!
//          (n - 1) * (n - 2)!

int factorial(int n)
{
	if (n == 0) return 1;  // 0! <= 1,  재귀호출 종료 조건

	return n * factorial(n - 1);
}


int func1(int n)
{
	printf("func1(%d) 호출\n", n);
	return func1(n + 1);
}

void bbb();

void aaa()
{
	printf("aaa\n");
	bbb();
}

void bbb()
{
	printf("bbb\n");
	aaa();
}

int main()
{
	//func1(1);  // 재귀호출하다 죽는다. StackOverflow 에러
	// aaa();   // StackOverflow 에러.  호출스택이 꽉차면 발생.

	int n = 5;
	printf("%d! = %d\n", n, factorial(n));

/*
	factorial(5)
		└  5 * factorial(4)
				└  4 * factorial(3)
						└  3 * factorial(2)
								└  2 * factorial(1)
										└  1 * factorial(0)
*/


	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}

























