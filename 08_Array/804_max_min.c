#include <stdio.h>
#pragma warning(disable:4996)

/*
���� 5���� ��� �迭 ����
����ڷκ��� 5�� �Է¹�����
�ִ񰪰� �ּڰ��� ����ϱ�
*/

#define MAX 5

int main()
{
	int score[MAX];

	printf("%d ���� ���� �Է��ϼ���: ", MAX);
	for (int i = 0; i < MAX; i++) {
		scanf("%d", &score[i]);
	}

	// 18, 32, 6, 78, 9

	// �ִ� ���ϱ�
	int max = score[0];
	for (int i = 1; i < MAX; i++) {
		if (max < score[i])
			max = score[i];
	}
	printf("�ִ� = %d\n", max);


	getchar();
	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}