#include <stdio.h>
#pragma warning(disable:4996)

/*
* ■ 순환문(loop)
* 	- for
* 	- while
* 	- do ~ while
*
* ■ for 순환문 구문
*
*	for(①초기식; ②조건식; ④증감식){
* 			③수행문;
*			..
*	}
*      ①초기식 : 최초에 단한번 수행
*      ②조건식 : 참 / 거짓 결과값
*      		위 조건식의 결과가 '거짓' 이면 for문 종료
*      ③수행문 : 위 조건식이 '참' 이면  수행
*      ④증감식 : 수행문이 끝나면 증감식 수행
*               증감식이 끝나면 다시 ②조건식 으로..
*
*	순환문을 작성시 내가 만드는 순환문에 대해 다음을 확실하게 인지하고 작성해야 한다
*	  1. 몇번 순환하는 가?
*	  2. 순환중에 사용된 인덱스값의 시작값과 끝값은?
*	  3. 순환문이 끝난뒤 인덱스값은?
*
*
*	for문 작성시 TIP
*	  1) n번 순환 하는 경우 (즉 횟수가 촛점인 경우)
*		for(int i = 0; i < n; i++){ .. }
*	  2) a ~ b 까지 순환하는 경우 (즉 시작값과 끝값이 중요한 경우)
*		for(int i = a; i <= b; i++){ .. }
*/
int main()
{
	for (int i = 0; i < 5; i++)
	{
		printf("i = %d\n", i);
		printf("------\n");
	}

	printf("\n");

	for (int i = 10; i > 0; i -= 3)
	{
		printf("i = %d\n", i);
	}

	//printf("i = %d\n", i);  // for 안에서 선언된 변수 i 는 for 블럭의 지역변수

	int k; // for 종료후에도 인덱스로 사용된 변수를 사용하려면, for 이전(바깥)에서 선언하자
	for (k = 10; k <= 100; k += 10)
	{
		printf("%d ", k);
	}
	printf("\n");
	printf("for 종료후 k = %d\n", k);

	printf("---------------------------\n");
	int i, j;
	for (i = 10, j = 1; j < i; i--, j += 2) // 초기식, 증감식은 여러개 나열 가능.
	{
		printf("i = %d, j = %d\n", i, j);
	}


	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}