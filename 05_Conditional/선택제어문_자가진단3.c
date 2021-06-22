#include <stdio.h>
#pragma warning(disable:4996)

/*
나이를 입력받아 20살 이상이면 "adult"라고 출력하고
그렇지 않으면 몇 년후에 성인이 되는지를 "○ years later"라는
메시지를 출력하는 프로그램을 작성하시오.
*/
int main()
{
	int age;
	scanf("%d", &age);

	if (age >= 20)
		printf("adult");
	else
		printf("%d years later", 20 - age);

	getchar();
	printf("\nENTER 누르면 프로그램을 종료합니다\n");
	getchar();
	return 0;
}