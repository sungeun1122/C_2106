#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	// do ~ while
	// 일단 한번 수행하고 나서 조건식 검사

	int i = 1;
	while (i < 0) {
		printf("while 수행중\n");
	}

	i = 1;
	do {
		printf("do ~ while 수행중 %d\n", i);
	} while (i < 0); // 세미콜론 꼭!


	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}