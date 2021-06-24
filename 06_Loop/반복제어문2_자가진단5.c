#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	// 10개의 숫자 입력받기
	int n;
	int mul3 = 0, mul5 = 0;   // 3의 배수의 개수, 5의배수의 개수.
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		if (n % 3 == 0) mul3++;
		if (n % 5 == 0) mul5++;
	}

	printf("Multiples of 3 : %d\n", mul3);
	printf("Multiples of 5 : %d\n", mul5);

	getchar();

	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}