#include <stdio.h>
#pragma warning(disable:4996)

/** 포인터와 배열
*  배열의 이름은 포인터다!  포인터 '상수'다!
*	포인터 연산이 적용된다.
*
*	배열첨자 연산자 []  ← 결국 포인터 연산이다
*
*		arr[n] ↔ *(arr + n)   ★★★
*
**/

// 배열을 매개변수로 받는 함수, 포인터 로 선언, length 값도 매개변수에 명시해야 한다.
// p : int*, (즉 int 배열을 받을수 있다)
// length : 배열원소의 개수
int calcTotal(int *p, int length)
{
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += p[i];  // *(p + i)
	}
	return sum;
}



int main()
{
	// 배열은 '연속된 메모리 공간' 에 생성됨.
	int arr[3] = { 10, 20, 30 };

	// 배열이름은 곧 배열의 '주소' 다.  포인터와 같이(처럼) 동작한다
	// 타입은?  int* 타입
	printf("arr = %p\n", arr);

	// *arr ????
	printf("*arr = %d\n", *arr);

	// 포인터 연산 (+, - ) 작동한다.
	printf("arr + 0 = %p, *(arr + 0) = %d\n", arr + 0, *(arr + 0)); // arr[0]
	printf("arr + 1 = %p, *(arr + 1) = %d\n", arr + 1, *(arr + 1)); // arr[1]
	printf("arr + 2 = %p, *(arr + 2) = %d\n", arr + 2, *(arr + 2)); // arr[2]

	// 주의 : * 참조연산자 우선순위가 일반적인 산술연산자보다 높다.
	// *(arr + 1)
	// *arr + 1
	printf("\n");
	printf("*(arr + 1) = %d, *arr + 1 = %d\n", *(arr + 1), *arr + 1);

	// 다른 포인터 변수로 배열을 가리킬수 있다.
	int *p = arr;
	printf("\n");
	printf("p[0] = %d\n", p[0]);
	printf("p[1] = %d\n", p[1]);
	printf("p[2] = %d\n", p[2]);

	// 포인터 변수와 배열의 차이점
	printf("sizeof(p) = %d\n", sizeof(p));  // int*, 4
	printf("sizeof(arr) = %d\n", sizeof(arr));  // int[3], 12

	int arr2[] = { 100, 200, 300 };
	p = arr2;  // p 는 포인터 '변수'
	//arr = p;   // arr 은 '상수'

	printf("\n");
	// 함수호출시 매개변수로 배열이름(포인터) 전달
	int total = calcTotal(arr, sizeof(arr) / sizeof(arr[0]));
	printf("총점은 = %d\n", total);		 

	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}