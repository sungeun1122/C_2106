#include <stdio.h>
#pragma warning(disable:4996)

/*
http://jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=21&sca=1050
121 : ������� - ������2
������ �Է¹޾� 0 �̸� "zero" ����̸� "plus" �����̸� "minus" ���
����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��
0

��� ��
zero
*/

int main()
{
	int n;
	scanf("%d", &n);

	if (n == 0) {
		printf("zero\n");
	}
	else if (n > 0) {
		printf("plus\n");
	}
	else if (n < 0) {
		printf("minus\n");
	}

	getchar();
	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}