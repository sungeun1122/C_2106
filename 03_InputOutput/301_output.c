#include <stdio.h>

int main()
{
	printf("기본출력(output)\n");
	// printf : print formatted (서식화된 출력)

	// "문자열" 출력
	printf("Hello World\n");  // <- 서식문자열

	// 문자열(string) 선언
	// 최대 20개의 문자로 구성된 문자열을 담을수 있는 str1 선언
	char str1[20] = "C Language";  // 10문자로 구성된 문자열. 공백도 하나의 문자!

	// %s : 문자열 출력하는 서식지정자
	printf("str1 = %s\n", str1);

	char str2[] = "Java Language"; // 자동적으로 초기화, 문자열의 문자 개수만큼의 크기로 생성
	printf("str2 = %s\n", str2);

	char *str3 = "Python Language";   // 포인터 사용
	printf("str3 = %s\n", str3);

	//---------------------------------
	// %d 서식지정자
	int a = 10, b = 123, c = 4567;
	printf("|%d|%d|%d|\n", a, b, c);
	printf("|%5d|%5d|%5d|\n", a, b, c);  // 5칸에 맞추어 출력 (기본 우측정렬) 
	printf("|%-5d|%-5d|%-5d|\n", a, b, c);

	printf("|%s|\n", str1);
	printf("|%20s|\n", str1);

	printf("|%.6f|\n", 0.0123456789);
	printf("|%20.6f|\n", 0.0123456789);  // 전체 20자리, 소숫점이하는 6자리출력

	//-------------------------------------
	// escape 문자
	// 문자열 안에서 (" ~ "  안에서) 사용하는 특수한 기능을 하는 문자 
	//  \  (back slash) 로 시작함
	//
	//  \n   : 줄바꿈
	//  \t   : 탭
	//  \"   : 쌍따옴표
	//  \\   : \ 출력
	//  \0   :  널(null) 문자

	printf("%d\t%d\t%d\n", 10, 20, 30);
	printf("%d\t%d\t%d\n", 1000, 2000, 3000);
	printf("%d\t%d\t%d\n", 10000, 20000, 30000);

	// say "hi"
	printf("say \"hi\"\n");

	// \\ 는 \ 를 출력하기 위한 ESC 문자입니다.
	printf("\\\\ 는 \\ 를 출력하기 위한 ESC 문자입니다.");

	getchar();
	return 0;
}
