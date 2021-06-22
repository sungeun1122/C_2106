#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	int height; // 키
	int weight; // 몸무게

	scanf("%d", &height);
	scanf("%d", &weight);

	// 비만수치 계산
	int obesity = weight + 100 - height; 

	printf("%d\n", obesity);

	if (obesity > 0)
		printf("Obesity");
	
	getchar();
	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}