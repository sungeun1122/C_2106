#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	// char 를 입력받을때 주의
	char ch;
	int a, b;
	printf("문자 하나 입력 : ");
	scanf("%c", &ch);
	printf("ch = %c\n", ch);

	printf("정수 하나 입력 : ");
	scanf("%d", &a);

	printf("a = %d, ch = %c\n", a, ch);

	getchar();   // 숫자등 입력후에 %c 입력받으려면 버퍼의 '\n' 제거

	printf("또다시 문자 하나 입력 : ");
	scanf("%c", &ch);
	printf("a = %d, ch = %c\n", a, ch);

	getchar();
	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}