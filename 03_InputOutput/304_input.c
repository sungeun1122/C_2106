#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c;
	printf("정수 3개 입력하세요 : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	// ↑ 한줄에 여러개 입력 가능,  여러줄에 걸쳐 입력도 가능

	printf("또 정수 3개 입력하세요 : ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	// ↑ 이 또한, 한줄에 여러개 입력 가능,  여러줄에 걸쳐 입력도 가능

	getchar(); getchar();
	return 0;
}