#include <stdio.h>  // 표준입출력 헤더 (standard input/output header)
					// printf() 등의 함수를 사용할수 있게 해준다.

// 한줄 주석 (line comment) : 코드 실행과는 관계 없슴. 메모등 남길때 사용

/*
	블럭 주석 (block comment)
	이 영역의 내용은 모두 주석으로 처리됨.
*/

int main() // main() 함수.  C 프로그램의 시작점
{
	// main() 함수의 시작 (main() 함수 블럭의 시작)
	// 블럭 안의 문장들을 하나하나 차례대로 실행한다.

	// printf(화면에 출력할내용)
	// 문자열을 출력할 경우 반드시 쌍따옴표 쌍으로 묶어준다 " ~ "
	printf("Hello World\n");  // 문장(statement). 문장의 끝은 반.드.시 세미콜론(;) 으로 마무리
	printf("안녕하세요\n");  // \n 줄바꿈 문자
	printf("C언어");

	getchar();
	return 0;

	// main() 함수가 끝나면 프로그램이 종료된다.
}

// 블럭 { .. } 
// 괄호 ( .. ) 
// 따옴표 " .. " 
//   이들의 쌍이 맞아야 한다


