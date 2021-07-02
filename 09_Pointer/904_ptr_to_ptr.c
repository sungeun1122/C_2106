#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int num1 = 10;
	int *p = NULL;  // int를 가리키기 위한 포인터, 초깃값 NULL (아무주소값도 없다, 0값)
	int **pp = NULL; // int*를 가리키기 위한 포인터

	p = &num1;
	pp = &p;  // 포인터 p 의 주소를 담은 pp


	printf("p = %p  pp = %p\n", p, pp);
	printf("&num1 = %p &p = %p\n", &num1, &p);

	printf("num1 = %d\n", num1);
	printf("*p = %d\n", *p);
	printf("**pp = %d\n", **pp);

	// 포인터 => 1차원 포인터  (1차원 배열)
	// 이중 포인터 => 2차원 포인터 (2차원 배열)
	// 삼중 포인터 => 3차원 포인터 ..


	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}