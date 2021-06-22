#include <stdio.h>
#pragma warning(disable:4996)

/*
선택제어문 - 자가진단4
http://jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=168&sca=1050

복싱체급은 몸무게가
50.80kg 이하를 Flyweight,
61.23kg 이하를 Lightweight,
72.57kg 이하를 Middleweight,
88.45kg 이하를 Cruiserweight,
88.45kg 초과를 Heavyweight
라고 하자.

몸무게를 입력받아 체급을 출력하는 프로그램을 작성하시오.
*/
int main()
{
	float weight;
	scanf("%f", &weight);

	if (weight <= 50.80)
		printf("Flyweight");
	else if (weight <= 61.23)
		printf("Lightweight");
	else if (weight <= 72.57)
		printf("Middleweight");
	else if (weight <= 88.45)
		printf("Cruiserweight");
	else
		printf("Heavyweight");

	getchar();
	printf("\nENTER 누르면 프로그램을 종료합니다\n");
	getchar();
	return 0;
}