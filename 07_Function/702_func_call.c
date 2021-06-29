#include <stdio.h>
#pragma warning(disable:4996)

void bbb() {
	printf("5) bbb() 함수 시작\n");
	printf("6) bbb() 함수 리턴\n");
}

void aaa() {
	printf("3) aaa() 함수 시작\n");
	bbb(); // bbb() 호출
	printf("4) aaa() 함수 리턴\n");
}


int main()
{
	printf("1) main() 함수 시작\n");

	aaa(); // aaa() 호출

	printf("2) main() 함수 리턴\n");

	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}