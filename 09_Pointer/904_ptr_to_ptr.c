#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int num1 = 10;
	int *p = NULL;  // int�� ����Ű�� ���� ������, �ʱ갪 NULL (�ƹ��ּҰ��� ����, 0��)
	int **pp = NULL; // int*�� ����Ű�� ���� ������

	p = &num1;
	pp = &p;  // ������ p �� �ּҸ� ���� pp


	printf("p = %p  pp = %p\n", p, pp);
	printf("&num1 = %p &p = %p\n", &num1, &p);

	printf("num1 = %d\n", num1);
	printf("*p = %d\n", *p);
	printf("**pp = %d\n", **pp);

	// ������ => 1���� ������  (1���� �迭)
	// ���� ������ => 2���� ������ (2���� �迭)
	// ���� ������ => 3���� ������ ..


	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}