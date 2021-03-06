#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	printf("산술 연산자 +, -, *, /, % \n");

	int result;
	result = 4 * 2 + 6 / 2;
	printf("result = %d\n", result);

	result = 4 * (2 + 6) / 2;
	printf("result = %d\n", result);

	// % : 나머지 연산자
	result = 10 % 3;
	printf("result = %d\n", result);

	// 복합 대입 연산자
	// +=, -=, *=, /=, %= ..... 대부분의 이항연산자에 대한 복합대입연산자 가능
	int n = 10;
	n = n + 3; // '기존의 변수 값' 에 +3 증가
	n += 3;   // 위와 동일한 동작을 하는 복합 대입연산자
	printf("n = %d\n", n);

	n %= 5;   // n = n % 5
	printf("n = %d\n", n);

	n -= 32;
	printf("n = %d\n", n);

	// 증감연산자
	// ++, --
	n = 10;
	n = n + 1;
	n += 1;
	n++;   // 변수값 n 을 +1 증가
	printf("n = %d\n", n);

	n--;  // postfix 방식
	--n;  // prefix 방식
	printf("n = %d\n", n);

	// postfix 방식 : 기존연산 '직후' 에 증감연산 수행
	// prefix 방식 :  기존연산 '직전' 에 증감연산 수행

	int num1 = 5;
	int num2 = num1++ + 4;
	printf("num1 = %d, num2 = %d\n", num1, num2);

	num1 = 5;
	num2 = ++num1 + 4;
	printf("num1 = %d, num2 = %d\n", num1, num2);

	// ※ 가급적이면 증감연산자는 연산식 '안'에서 사용하는 것은 피하자
	// num1 = 5;
	// num2 = num1 + 4;
	// num1++;

	// 모든 연산은 결과가 있다. (값, 타입 주목)
	// 심지어 '대입연산자' 도 결과가 있다.
	printf("num1 = %d\n", num1 = 2);

	int num3 = num2 = num1;

	// 비교연산자(관계연산자)
	// 결과가 '참' 이면 1,  '거짓' 이면 0 
	// > , < , >=, <=, ==, != ...
	printf("\n비교연산자\n");
	printf("10 > 3 = %d\n", 10 > 3);
	printf("10 < 3 = %d\n", 10 < 3);
	printf("10 >= 10 = %d\n", 10 >= 10);   // '=>'  (X)
	printf("10 == 10 = %d\n", 10 == 10);   // '='  (X) 대입연산자와 헷갈리지 말자.
	printf("10 != 10 = %d\n", 10 != 10);

	// 논리연산자
	// &&, ||, !
	// && : and 연산자, 논리곱 연산, 피연산자 양쪽이 둘다 '참' 인 경우만 참
	// || : or 연산자,  논리합 연산 ,  피연산자 양쪽이 둘중 하나만 참이어도 참
	// ! : not 연산자,  참->거짓, 거짓->참 

	/*

	T && T == >  T(1)
	T && F == >  F(0)
	F && T == >  F(0)
	F && F == >  F(0)

	T || T == >  T(1)
	T || F == >  T(1)
	F || T == >  T(1)
	F || F == >  F(0)

	!T == >  F(0)
	!F == >  T(1)

	*/

	printf("논리연산자\n");
	result = (10 > 4) && (45 < 90);
	printf("result = %d\n", result);

	result = (10 < 4) && (45 < 90);
	printf("result = %d\n", result);


	// C언어는 0 은 '거짓',  0 이외의 값은 '참' 으로 판정한다.
	// java, python 같은 boolean 타입 없슴

	result = 10 - 10 || 100 + 1;
	printf("result = %d\n", result);

	result = 10 - (10 || 100) + 1;
	printf("result = %d\n", result);

	result = -10 && -100;
	printf("result = %d\n", result);

	// ! : not 연산자
	result = 54 % 2 == 0;
	printf("result = %d\n", result);

	result = !(54 % 2 == 0);
	printf("result = %d\n", result);

	printf("%d, %d, %d\n", 100 * 2, -1, 0);    // 200, -1, 0
	printf("%d, %d, %d\n", !(100 * 2), !(-1), !(0));  // 0, 0, 1



	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}