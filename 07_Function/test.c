#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	int lval = 0xFEDCBA98;
	int aval = 0xFEDCBA98;
	unsigned uval = 0xFEDCBA98;

	//printf("lval = %X\n", lval);
	//printf("aval = %X\n", aval);
	//printf("uval = %X\n", uval);

	for (int i = 1; i <= 64; i++) {
		printf("%X << %d = %X\n", lval, i, lval << i);
	}


	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}