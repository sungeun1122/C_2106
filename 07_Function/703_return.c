#include <stdio.h>
#pragma warning(disable:4996)

// 두개의 정수(int) 값을 받아서,  덧셈을 수행하고 
// 그 결과를 리턴(int)하는 함수 add 정의하기

// 함수이름 : add
// 매개변수 : int, int
// 리턴값 : int (두 매개변수를 덧셈한 결과를 리턴)

int add(int a, int b) {
	int sum = a + b;
	return sum;  // return 값 : 함수 종료 호출한 쪽으로 값 리턴
}

// 함수이름 : sub
// 매개변수 : int, int
// 리턴값 : int  (두 매개변수를 뺀 결과값 리턴)
int sub(int a, int b)
{
	return a - b;
}

// 리턴값이 없는 함수는 void 명시
void mul(int a, int b) {
	printf("mul() 호출\n");
	//return;  // 함수 실행중에 return 을 만나면 곧바로 종료, 리턴
	printf("%d x %d = %d\n", a, b, a * b);
	
}

// 동일 이름의 함수 정의 불가
//float mul(float a, float b) {
//	return a * b;
//}

// 함수 선언 (function declaration)
// 함수 정의가 호출부 이후에 있거나, 혹은 다른 파일에 있는 경우
// 미리 함수 선언을 해주어 컴파일 가능케 함.
// 함수선언구문
//     리턴타입 함수명 (매개변수 ...);    <-- 함수의 프로토타입(원형: prototype) 이라고도 함

double half(double);  // 선언부에는 매개변수명 생략 가능


int main()
{
	int result = add(100, 40); // 함수호출. 결괏값(리턴값)을 result 에 대입
	printf("result = %d\n", result);

	printf("40과 30을 더한 값은 = %d\n", add(40, 30));
	printf("40 - 30 = %d\n", sub(40, 30));

	result = add(add(10, 20), sub(40, 80));
	printf("result = %d\n", result);

	mul(40, 30);

	printf("41 을 2로 나눈 결과는 %.1f\n", half(41));

	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}

// C언어는 
// 함수 호출(사용)하기 전에 반.드.시 먼저 '정의' 되어 있거나 혹은 '선언' 되어 있어야 한다.
double half(double arg) {
	return arg / 2;
}