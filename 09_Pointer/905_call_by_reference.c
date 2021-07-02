#include <stdio.h>
#pragma warning(disable:4996)

/*
*  함수호출시 매개변수 전달 방식에 따라
*  1. Call By Value (값에 의한 호출)
*     : 기본적으로 매개변수 값의 '복사' 발생
*     : 호출한 원본은 변화 없다.
*  2. Call By Reference (참조에 의한 호출)
*     : 호출시 포인터(주소)를 함수에 넘겨준다
*	  : 기본적으로 매개변수(포인터, 주소) 값의 '복사' 발생
*     : 호출한 원본의 변화 발생
*/

void inc1(int n) {
	n += 1;
	printf("inc1() n = %d\n", n);
}

void inc2(int *p){
	*p += 1;   // 호출시 넘겨온 원본의 주소를 참조하여 변경
	printf("inc2() *p = %d\n", *p);
}

int main()
{
	int n = 10;
	inc1(n);  // 함수 호출
	printf("inc1() 리턴후 n = %d\n", n);  // 호출한쪽의 원본 n 변화 없다.

	inc2(&n);  // 호출시 원본의 '주소'를 넘김
	printf("inc2() 리턴후 n = %d\n", n);  // 호출한쪽의 원본 n 변화 발생!!

	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}