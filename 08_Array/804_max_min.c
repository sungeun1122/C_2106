#include <stdio.h>
#pragma warning(disable:4996)

/*
정수 5개를 담는 배열 선언
사용자로부터 5개 입력받은뒤
최댓값과 최솟값을 출력하기
*/

#define MAX 5

int main()
{
	int score[MAX];

	printf("%d 개의 값을 입력하세요: ", MAX);
	for (int i = 0; i < MAX; i++) {
		scanf("%d", &score[i]);
	}

	// 18, 32, 6, 78, 9

	// 최댓값 구하기
	int max = score[0];
	for (int i = 1; i < MAX; i++) {
		if (max < score[i])
			max = score[i];
	}
	printf("최댓값 = %d\n", max);


	getchar();
	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}