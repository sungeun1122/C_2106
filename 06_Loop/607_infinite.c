#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	// for ���ѷ���
	// for (;;) {..}

	// while ���ѷ���
	//while (1) { ..}

	// ����ڷκ��� ������ ��� �Է¹޴ٰ�
	// 0 �� �ԷµǸ� �����ϰ�.
	// �׵��� �Է¹޾Ҵ� ������ '����' �� '��' �� ����ϼ���.
	int count = 0; // ����
	int sum = 0; // �հ�

	while (1) { // ���ѷ���
		int n;
		scanf("%d", &n);

		// ���ѷ��� ��������
		if (n == 0) {  // 
			getchar();
			break;  // 0 �� �ԷµǸ� ���ѷ��� ����
		}

		count++; // ���� ����
		sum += n; // ���� �ջ�
	}

	printf("�Է��� ������ ���� : %d��\n", count);
	printf("�Է��� ������ ��: %d��\n", sum);

	while(getchar() != '\n');
	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}