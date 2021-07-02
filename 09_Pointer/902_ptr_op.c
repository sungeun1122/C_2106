#include <stdio.h>
#pragma warning(disable:4996)

/** 포인터 연산
*
*	명심:
*	  포인터 -> 주소
*	  *포인터 -> 그 주소가 가리키는 값
*	포인터 타입 -> 그 주소가 가리키는 값의 타입
*
*	포인터변수에 +, - 연산을 하는 것은
*	결국 주소값을 증감 하는 것인데,
*	주소값이 얼마만큼 증감 하느냐는 '포인터 타입' 에 따라 다르다
*
*	ex) int* 포인터 인 경우 가리키는 값의 타입이  int (4byte) 이기 때문에
*		포인터 값에 + 1 연산을 할 경우 주소값이 4증가한다.
*
**/

int main()
{
	int n = 555;
	int *p = &n;

	printf("n = %d, p = %p, *p = %d\n", n, p, *p);
	// n, p 에 각각 +1 연산을 하면??

	printf("n + 1 = %d, p + 1 = %p, *(p + 1) = %d\n", 
			n + 1, p + 1, *(p + 1));

	printf("\n");

	short s = 222;
	short *p2 = &s;  // p2 는 short * 타입

	printf("s = %d, p2 = %p\n", s, p2);
	printf("s + 1 = %d, p2 + 1 = %p\n", s + 1, p2 + 1);  // p2 값보다 +2
	printf("s + 2 = %d, p2 + 2 = %p\n", s + 2, p2 + 2);  // p2 값보다 +4

	double d = 3.14;
	double *p3 = &d;  // p3 는 double * 타입

	printf("d = %f, p3 = %d\n", d, p3);
	printf("d + 1= %f, p3 + 1= %d\n", d + 1, p3 + 1);
	printf("d + 3= %f, p3 + 3= %d\n", d + 3, p3 + 3);


	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}










