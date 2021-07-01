#include <stdio.h>
#pragma warning(disable:4996)

/*
	배열 초기화
*/

int main()
{
	int arr1[4];   // int 타입 원소 4개 담는 배열 arr1 선언

	// 배열 원소 초기화 없이 사용하면 쓰레기값(garbage value) 나옴.
	for (int i = 0; i < 4; i++) {
		printf("arr1[%d] = %d\n", i, arr1[i]);
	}

	// 배열원소 초기화 
	// 방법1 : 직접 초기화
	arr1[0] = 100;
	arr1[1] = 200;
	arr1[2] = 300;
	arr1[3] = 400;
	for (int i = 0; i < 4; i++) {
		printf("arr1[%d] = %d\n", i, arr1[i]);
	}

	printf("\n");

	// 방법2 : 배열 선언과 동시에 초기화
	short arr2[3] = {10, 20, 30};
	for (int i = 0; i < 3; i++) {
		printf("arr2[%d] = %d\n", i, arr2[i]);
	}

	printf("\n");

	// 방법3 : 초기화 값의 개수가 배열의 길이보다 작다면?? (배열의 길이 => 배열원소의개수)
	// 나머지가 0으로 초기화 됨.
	double arr3[3] = {3.14};
	for (int i = 0; i < 3; i++) {
		printf("arr3[%d] = %f\n", i, arr3[i]);
	}

	printf("\n");

	// 방법4 : 배열의 길이 명시 없이 초깃값만으로 선언하여 초기화
	//char arr4[];  // 선언할때 길이 명시 안하면 에러
	char arr4[] = {'a', 'b', 'c'};  // arr4 는 길이 3짜리 배열로 선언됨.
	int i = 0;
	while(i < 3){
		printf("%c ", arr4[i]);
		i++;
	}
	printf("\n");

	// 배열의 용량(size)
	// arr1 => 16byte
	// arr2 => 6byte
	// arr3 => 24byte
	// arr4 => 3 byte


	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}



















