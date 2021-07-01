#include <stdio.h>
#pragma warning(disable:4996)

/*
http://jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=56&sca=1090
배열1 - 형성평가7
[문제]
세 자리 이하의 정수를 차례로 입력 받다가 999가 입력되면 프로그램을 종료하고
그 때까지 입력된 최대값과 최소값을 출력하는 프로그램을 작성하시오.
입력받는 정수는 100개 이하이다.


입력]
45 19 123 58 10 -55 16 -1 999

출력]
max : 123
min : -55
*/

int main()
{
	int num[100];
	int i;
	for (i = 0; i < 100; i++) {
		scanf("%d", &num[i]);
		if (num[i] == 999) break;  // 999 입력되면 종료
	}// end for

	int min = num[0];  // 최솟값
	int max = num[0];  // 최댓값
	for (int j = 1; j < i; j++) {
		if (min > num[j]) min = num[j];
		if (max < num[j]) max = num[j];
	} // end for

	printf("max : %d\n", max);
	printf("min : %d\n", min);

	getchar();
	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}