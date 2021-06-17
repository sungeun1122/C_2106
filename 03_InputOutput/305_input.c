#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	// 문자열 입력
	char name[20];  // 최대 20글자 담을수 있는 문자열 name

	printf("이름을 입력하세요 : ");
	scanf("%s", name);  // 문자열 입력받을때는 & 붙이지 말기.
			// %s : 공백없는 문자열 입력
	printf("입력하신 이름은 : %s\n", name);

	getchar();

	// 한 줄(line) 입력
	printf("full-name 을 입력하세요 : ");
	gets(name);  // 공백 포함해서 ENTER 입력될때까지 한줄 입력
	printf("이름은 %s 입니다\n", name);


	getchar(); getchar();
	return 0;
}