#include <stdio.h>
#pragma warning(disable:4996)

/*
*  ▶ 함수 (function)
*   자주 반복되어 수행할 코드 덩어리(?) 들을
*    1. 함수(function)로 '정의' 하고
*    2. 필요할때마다 정의된 함수를 '호출'하여 사용한다.
*
*  ▶ 함수 정의 (function definition)
*
*    [함수정의형식]
*    리턴타입 함수이름(매개변수들..)
*    {
*       함수본체 (수행 코드들...)
*    }
*
*    return type  function name(parameter ...)
*    {
*       function body
*    }
*
*  ▶ 함수의 원형 (function Prototype)
*       리턴타입 함수이름(매개변수들..)
*
*  ▶ 함수 호출 (function call, function invocation)
*     [함수호출형식]
*       함수이름(매개변수들..);
*
*     - C언어는 '함수 기반' 언어다
*       C언어로 작성한 프로그램은 시스템에서 main() 함수를 호출함으로 프로그램 실행이 시작되고
*       main() 함수가 끝나면 프로그램이 종료되는 것이다.
*
*     - A() 함수실행중 B() 함수를 호출하게 되면
*         호출한 함수 A()은 잠시 멈추고   (--> 호출한함수: caller 라고도 함)
*         호출된 함수 B()의 실행을 시작합니다 (--> 피호출함수: callee 라고도 함)
*         B()의 실행이 끝나면 호출한 함수 A()로 실행이 돌아옵니다.
* 		  이를 리턴 한다 합니다 ↓
*
*  ▶ return (리턴, 반환)
*       함수가 호출되어 함수내 코드실행이 끝나면, 호출한쪽으로 실행이 돌아옵니다.
*       return 키워드를 사용하여 명시적으로 리턴할수도 있습니다. (함수는 바로 종료됩니다)
*       return 키워드가 없어도, 함수실행 끝나면 자동으로 리턴합니다.
*
*  ▶ 함수 매개변수(parameter), 함수 인자(argument)
*      매개변수는 함수 정의할때 명시하는 변수 (그 함수의 지역변수로서 동작한다)
*      인자 는 함수 호출할때 입력하여 매개변수에 전달하는 값
*      함수 호출시 호출인자가 매개변수에 '복사' 되어 호출한 함수 수행된다.
*      ※ 두 용어는 혼용되어 사용되곤 한다.
*/

// 함수이름 myFunc 으로 함수'정의'
void myFunc()
{
	printf("\tmyFunc() 실행\n");
	printf("\tmyFunc() 함수종료. return 합니다\n");
}

// 함수정의
// 이름 : oper
// 매개변수 : int, int
// 리턴타입 : void (없다.  리턴값이 없는 경우 반드시 void 명시)
// 동작 : 두개의 정수값을 받아서 사칙연산 결과 출력
void oper(int k, int v) {
	printf("두 수는 %d, %d 입니다\n", k, v);
	printf("%4d + %4d = %d\n", k, v, k + v);
	printf("%4d - %4d = %d\n", k, v, k - v);
	printf("%4d * %4d = %d\n", k, v, k * v);
	printf("%4d / %4d = %d\n\n", k, v, k / v);
	// 함수 수행이 끝나면 호출한 함수로 리턴(return) 한다
}



int main()
{
	{  // 반복되는 코드들 -> 함수가 필요한 이유
		int a, b;

		a = 10; b = 30;
		printf("두 수는 %d, %d 입니다\n", a, b);
		printf("%4d + %4d = %d\n", a, b, a + b);
		printf("%4d - %4d = %d\n", a, b, a - b);
		printf("%4d * %4d = %d\n", a, b, a * b);
		printf("%4d / %4d = %d\n\n", a, b, a / b);

		a = 400; b = -10;
		printf("두 수는 %d, %d 입니다\n", a, b);
		printf("%4d + %4d = %d\n", a, b, a + b);
		printf("%4d - %4d = %d\n", a, b, a - b);
		printf("%4d * %4d = %d\n", a, b, a * b);
		printf("%4d / %4d = %d\n\n", a, b, a / b);

		a = -50; b = 30;
		printf("두 수는 %d, %d 입니다\n", a, b);
		printf("%4d + %4d = %d\n", a, b, a + b);
		printf("%4d - %4d = %d\n", a, b, a - b);
		printf("%4d * %4d = %d\n", a, b, a * b);
		printf("%4d / %4d = %d\n\n", a, b, a / b);
	}

	// 코드가 DRY 해요?  (Don't Repeat Yourself)
	printf("-----------------------------------------\n");
	{
		// 함수사용(함수 호출: function call, function invoke)
		//   함수 이름(인자값..)을 사용하여 호출
		printf("[main() : myFunc() 호출전]\n");
		myFunc(); // myFunc() 함수 호출
		printf("[main() : myFunc() 리턴후]\n");

		oper(40, 50);  // oper() 함수 호출, 매개변수 k, v 에는 각각 40, 50 값이 전달(복사 발생)
		oper(10, 20);
		oper(100, 200);
		oper(-300, 100);
	}


	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}