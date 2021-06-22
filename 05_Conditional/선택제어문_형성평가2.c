#include <stdio.h>
#pragma warning(disable:4996)

/*
http://jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=21&sca=1050
121 : 선택제어문 - 형성평가2
정수를 입력받아 0 이면 "zero" 양수이면 "plus" 음수이면 "minus" 라고
출력하는 프로그램을 작성하시오.

입력 예
0

출력 예
zero
*/

int main()
{
	int n;
	scanf("%d", &n);

	if (n == 0) {
		printf("zero\n");
	}
	else if (n > 0) {
		printf("plus\n");
	}
	else if (n < 0) {
		printf("minus\n");
	}

	getchar();
	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}