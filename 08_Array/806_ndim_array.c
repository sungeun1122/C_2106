#include <stdio.h>
#pragma warning(disable:4996)

/* 다차원 배열 (n-dimensional array)
*	배열 첨자(index)를
*	하나 사용하면 --> 1차원 배열
*	두개 사용하면 --> 2차원 배열
*	..
*/

int main()
{
	// 2차원 배열 선언
	int arr[4][3];  // 4 x 3,  4 x int[3]

	// 개별적으로 초기화
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;
	arr[2][0] = 7;
	arr[2][1] = 8;
	arr[2][2] = 9;
	arr[3][0] = 10;
	arr[3][1] = 11;
	arr[3][2] = 12;
	
	int arr2[4][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		{10, 11, 12}
	};

	int arr3[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

	printf("arr2[2][2] = %d\n", arr2[2][2]); // 9
	printf("arr2[3][1] = %d\n", arr2[3][1]); // 11

	// 2차원 배열 데이터 출력
	// 2차원 배열 --> for문 2개	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
		}
	}

	printf("\n");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}

	//
	//int arr4[4][2][1];  //  4 x int[2][1]

	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}