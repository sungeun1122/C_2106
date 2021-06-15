#include <stdio.h>
/*
*	C언어의 데이터 타입
*
*	 char : 1byte, 문자하나(정수)
*	 short : 2byte  정수
*	 int  : 4byte   정수
*	 long : 4byte   정수 (시스템마다 다름)
*	 float : 4byte  실수
*	 double : 8byte 실수
*
*/
int main()
{
	printf("데이터 타입\n");

	// 정수타입 변수
	int i = 0;
	int a = 100, b = 200, c = 300;  // 4byte

	short s1, s2, s3, s4 = 400;  // 2byte
	long l1, l2 = 10000000, l3;  // 4byte

	// 문자타입 변수
	char ch1;  // 1byte
	ch1 = 'a';  // 'a' 문자의 코드값(정수)가 ch1 에 대입
				// char 문자하나 --> 홀따옴표 사용

	printf("ch1 = %d\n", ch1);  // 'a' => 97
	printf("ch1 = %c\n", ch1);  // %c 는 문자(하나)로 출력
	printf("ch1 = %c\n", 98);   // 'b' <=> 98
	printf("ch1 = %c\n", ch1 + 2);  // 'c' <=> 99

	// 1. bible
	// 2. able
	// 3. cable

	// 1. aaAA
	// 2. AaAa
	// 3. AAaa
	// 4. aAaA

	ch1 = 'A';
	printf("ch1 = %d\n", ch1);  // 'A' 코드값은 65

	// printf의 포맷문자열 안에 들어가는 서식지정자(format specifier) 들
	// %d : 10진수 정수로 출력
	// %c : 문자로 출력
	// %f : 실수로 출력
	// %x : 16진수 정수로 출력
	// %% : % 출력

	printf("%d, %x, %c\n", 65, 65, 65);

	{
		// 정수타입, 용량의 차이
		// 1byte / 8bit = 2의 8승 = 256개(가지)
		//       0 ~ 255 까지 담을수 있는 용량

		// char : -128 ~ +127
		// short : -32768 ~ +32767
		// int : -2,147,483,648~ 2,147,483,647

		char ch2 = 200;
		printf("ch2 = %d\n", ch2);

		// 정수타입의 변수는 오버플로우(overflow), 언더플로우(underflow) 발생
		// https://dojang.io/pluginfile.php/75/mod_page/content/34/unit7-2.png

	}

	{
		// signed(부호있는) vs. unsigned(부호없는) 타입
		signed char ch1 = 200;  // signed 는 일반적으로 생략
		unsigned char ch2 = 200;  // 0 ~ +255
		printf("ch1 = %d\n", ch1);
		printf("unsigned ch2 = %d\n", ch2);

		unsigned short s2;
		unsigned int i2;
	}

	{
		// 실수타입
		float f1 = 3.141592;  // 4byte
		double d1 = 3.141592;   // 8byte

		printf("f1 = %f\n", f1);
		printf("d1 = %f\n", d1);
		printf("f1 = %.2f\n", f1);  // %.2f  소숫점 2자리까지 출력 (이한 반올림)
		printf("f1 = %.4f\n", f1);
	}

	{
		// 실수 타입에서의 용량의 차이
		// 정밀도(precision)의 차이가 있다
		// float : 소숫점 6 ~ 9 자리
		// double : 소숫점 15 ~ 18자리

		float f2 = 0.0123456789;
		double d2 = 0.0123456789;

		// %f 로 출력하면 기본적으로 소숫점 6자리까지 출력
		printf("f2 = %f, d2 = %f\n", f2, d2);

		printf("f2 = %.10f\nd2 = %.10f\n", f2, d2);
	}


	getchar();
	return 0;
}