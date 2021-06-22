#include <stdio.h>
#pragma warning(disable:4996)

/*
	중첩조건문 (nested - if, nested - switch)
*/

int main()
{
	// 정수 하나 입력 받아서
	// 짝수이면 "짝수입니다" 를 출력하고
	//      짝수이면서 3의 배수이면 "3의 배수입니다" 라고 출력하세요
	//      짝수이면서 3의 배수가 아니면 "짝수이지만 3의 배수는 아닙니다" 라고 출력하세요
	// 홀수이면 "홀수입니다" 를 출력해보세요

	int n;
	printf("정수 하나 입력하세요: ");
	scanf("%d", &n);
	if (n % 2 == 0) {
		printf("짝수입니다\n");

		if (n % 3 == 0) {
			printf("3의 배수입니다\n");
		}
		else {
			printf("짝수이지만 3의 배수는 아닙니다\n");
		}

	}
	else {
		printf("홀수입니다\n");
	}

	printf("----------------------\n");

	switch (n % 2)
	{
	case 0:
		printf("짝수입니다\n");

		switch (n % 3)
		{
		case 0:
			printf("3의 배수입니다\n");
			break;
		default:
			printf("짝수이지만, 3의 배수는 아닙니다\n");
		}
		break;
	case 1:
		printf("홀수입니다\n");
		break;
	}


	getchar();
	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}