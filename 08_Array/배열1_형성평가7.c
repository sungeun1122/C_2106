#include <stdio.h>
#pragma warning(disable:4996)

/*
http://jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=56&sca=1090
�迭1 - ������7
[����]
�� �ڸ� ������ ������ ���ʷ� �Է� �޴ٰ� 999�� �ԷµǸ� ���α׷��� �����ϰ�
�� ������ �Էµ� �ִ밪�� �ּҰ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է¹޴� ������ 100�� �����̴�.


�Է�]
45 19 123 58 10 -55 16 -1 999

���]
max : 123
min : -55
*/

int main()
{
	int num[100];
	int i;
	for (i = 0; i < 100; i++) {
		scanf("%d", &num[i]);
		if (num[i] == 999) break;  // 999 �ԷµǸ� ����
	}// end for

	int min = num[0];  // �ּڰ�
	int max = num[0];  // �ִ�
	for (int j = 1; j < i; j++) {
		if (min > num[j]) min = num[j];
		if (max < num[j]) max = num[j];
	} // end for

	printf("max : %d\n", max);
	printf("min : %d\n", min);

	getchar();
	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}