#include <stdio.h>
#pragma warning(disable:4996)

/*
	�迭 �ʱ�ȭ
*/

int main()
{
	int arr1[4];   // int Ÿ�� ���� 4�� ��� �迭 arr1 ����

	// �迭 ���� �ʱ�ȭ ���� ����ϸ� �����Ⱚ(garbage value) ����.
	for (int i = 0; i < 4; i++) {
		printf("arr1[%d] = %d\n", i, arr1[i]);
	}

	// �迭���� �ʱ�ȭ 
	// ���1 : ���� �ʱ�ȭ
	arr1[0] = 100;
	arr1[1] = 200;
	arr1[2] = 300;
	arr1[3] = 400;
	for (int i = 0; i < 4; i++) {
		printf("arr1[%d] = %d\n", i, arr1[i]);
	}

	printf("\n");

	// ���2 : �迭 ����� ���ÿ� �ʱ�ȭ
	short arr2[3] = {10, 20, 30};
	for (int i = 0; i < 3; i++) {
		printf("arr2[%d] = %d\n", i, arr2[i]);
	}

	printf("\n");

	// ���3 : �ʱ�ȭ ���� ������ �迭�� ���̺��� �۴ٸ�?? (�迭�� ���� => �迭�����ǰ���)
	// �������� 0���� �ʱ�ȭ ��.
	double arr3[3] = {3.14};
	for (int i = 0; i < 3; i++) {
		printf("arr3[%d] = %f\n", i, arr3[i]);
	}

	printf("\n");

	// ���4 : �迭�� ���� ��� ���� �ʱ갪������ �����Ͽ� �ʱ�ȭ
	//char arr4[];  // �����Ҷ� ���� ��� ���ϸ� ����
	char arr4[] = {'a', 'b', 'c'};  // arr4 �� ���� 3¥�� �迭�� �����.
	int i = 0;
	while(i < 3){
		printf("%c ", arr4[i]);
		i++;
	}
	printf("\n");

	// �迭�� �뷮(size)
	// arr1 => 16byte
	// arr2 => 6byte
	// arr3 => 24byte
	// arr4 => 3 byte


	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}



















