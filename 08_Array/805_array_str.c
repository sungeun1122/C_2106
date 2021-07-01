#include <stdio.h>
#pragma warning(disable:4996)

/* 배열과 문자열(string)
*	 - C언어 에선 "문자열" 의 정체는 'char [] 배열' 이다
*	 - C언어의 "문자열"은
*		  끝이 '\0' (null 문자) 로 끝나는 'char [] 배열' 이다
*/

int main()
{
	char str1[20] = "nice";

	printf("str1 = %s\n", str1); // %s -> char 배열에서 '\0' 만날때까지 출력
	printf("str1[0] = %c\n", str1[0]);
	printf("str1[1] = %c\n", str1[1]);
	printf("str1[2] = %c\n", str1[2]);
	printf("str1[3] = %c\n", str1[3]);
	printf("str1[4] = %c\n", str1[4]); // '\0'

	//char str2[] = { 'n', 'i', 'c', 'e' };
	char str2[] = { 'n', 'i', 'c', 'e', '\0' };
	printf("str2 = %s\n", str2);

	char str3[] = "nice";  // str3 의 길이는 5
	char *str4 = "nice";
	
	printf("%d\n", sizeof(str3));
	printf("str3 = %s\n", str3);
	printf("str4 = %s\n", str4);


	str1[0] = 'D';
	printf("str1 = %s\n", str1);  // "Dice"
	str2[0] = 'V';
	printf("str2 = %s\n", str2);  // "Vice"

	//str4[0] = 'D';
	//printf("str4 = %s\n", str4); // 에러

	str2[4] = "#"; // 문자열 맨끝의 '\0' 문자 삭제 하면, %s 출력시 쓰레기값 출력된다
	printf("str2 = %s\n", str2);


	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}