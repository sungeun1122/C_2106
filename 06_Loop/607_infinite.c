#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	// for 무한루프
	// for (;;) {..}

	// while 무한루프
	//while (1) { ..}

	// 사용자로부터 정수를 계속 입력받다가
	// 0 이 입력되면 종료하고.
	// 그동안 입력받았던 점수의 '개수' 와 '합' 을 출력하세요.
	int count = 0; // 개수
	int sum = 0; // 합계

	while (1) { // 무한루프
		int n;
		scanf("%d", &n);

		// 무한루프 종료조건
		if (n == 0) {  // 
			getchar();
			break;  // 0 이 입력되면 무한루프 종료
		}

		count++; // 개수 증가
		sum += n; // 누적 합산
	}

	printf("입력한 숫자의 갯수 : %d개\n", count);
	printf("입력한 숫자의 합: %d개\n", sum);

	while(getchar() != '\n');
	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}