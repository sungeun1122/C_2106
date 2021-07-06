#include <stdio.h>
#pragma warning(disable:4996)

/*
10개의 원소를 저장할 수 있는 배열을 선언한 후 포인터 변수를 이용하여 자료를 입력받아 홀수의 개수와 짝수의 개수를 출력하는 프로그램을 작성하시오.

[입력예]
3 5 10 52 1 97 36 25 13 29

[출력예]
odd : 7
even : 3

*/

int main()
{
	int num[10];
	int *p = num;
	int odd = 0;
	int even = 0;
	for (int i = 0; i < 10; i++) {
		//scanf("%d", &p[i]);  //  가능
		scanf("%d", p + i);  // 가능
		if (p[i] % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
	}
	printf("odd : %d\neven : %d", odd, even);
	getchar();

	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}