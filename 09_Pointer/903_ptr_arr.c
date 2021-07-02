#include <stdio.h>
#pragma warning(disable:4996)

/** �����Ϳ� �迭
*  �迭�� �̸��� �����ʹ�!  ������ '���'��!
*	������ ������ ����ȴ�.
*
*	�迭÷�� ������ []  �� �ᱹ ������ �����̴�
*
*		arr[n] �� *(arr + n)   �ڡڡ�
*
**/

// �迭�� �Ű������� �޴� �Լ�, ������ �� ����, length ���� �Ű������� ����ؾ� �Ѵ�.
// p : int*, (�� int �迭�� ������ �ִ�)
// length : �迭������ ����
int calcTotal(int *p, int length)
{
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += p[i];  // *(p + i)
	}
	return sum;
}



int main()
{
	// �迭�� '���ӵ� �޸� ����' �� ������.
	int arr[3] = { 10, 20, 30 };

	// �迭�̸��� �� �迭�� '�ּ�' ��.  �����Ϳ� ����(ó��) �����Ѵ�
	// Ÿ����?  int* Ÿ��
	printf("arr = %p\n", arr);

	// *arr ????
	printf("*arr = %d\n", *arr);

	// ������ ���� (+, - ) �۵��Ѵ�.
	printf("arr + 0 = %p, *(arr + 0) = %d\n", arr + 0, *(arr + 0)); // arr[0]
	printf("arr + 1 = %p, *(arr + 1) = %d\n", arr + 1, *(arr + 1)); // arr[1]
	printf("arr + 2 = %p, *(arr + 2) = %d\n", arr + 2, *(arr + 2)); // arr[2]

	// ���� : * ���������� �켱������ �Ϲ����� ��������ں��� ����.
	// *(arr + 1)
	// *arr + 1
	printf("\n");
	printf("*(arr + 1) = %d, *arr + 1 = %d\n", *(arr + 1), *arr + 1);

	// �ٸ� ������ ������ �迭�� ����ų�� �ִ�.
	int *p = arr;
	printf("\n");
	printf("p[0] = %d\n", p[0]);
	printf("p[1] = %d\n", p[1]);
	printf("p[2] = %d\n", p[2]);

	// ������ ������ �迭�� ������
	printf("sizeof(p) = %d\n", sizeof(p));  // int*, 4
	printf("sizeof(arr) = %d\n", sizeof(arr));  // int[3], 12

	int arr2[] = { 100, 200, 300 };
	p = arr2;  // p �� ������ '����'
	//arr = p;   // arr �� '���'

	printf("\n");
	// �Լ�ȣ��� �Ű������� �迭�̸�(������) ����
	int total = calcTotal(arr, sizeof(arr) / sizeof(arr[0]));
	printf("������ = %d\n", total);		 

	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}