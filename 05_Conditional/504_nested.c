#include <stdio.h>
#pragma warning(disable:4996)

/*
	��ø���ǹ� (nested - if, nested - switch)
*/

int main()
{
	// ���� �ϳ� �Է� �޾Ƽ�
	// ¦���̸� "¦���Դϴ�" �� ����ϰ�
	//      ¦���̸鼭 3�� ����̸� "3�� ����Դϴ�" ��� ����ϼ���
	//      ¦���̸鼭 3�� ����� �ƴϸ� "¦�������� 3�� ����� �ƴմϴ�" ��� ����ϼ���
	// Ȧ���̸� "Ȧ���Դϴ�" �� ����غ�����

	int n;
	printf("���� �ϳ� �Է��ϼ���: ");
	scanf("%d", &n);
	if (n % 2 == 0) {
		printf("¦���Դϴ�\n");

		if (n % 3 == 0) {
			printf("3�� ����Դϴ�\n");
		}
		else {
			printf("¦�������� 3�� ����� �ƴմϴ�\n");
		}

	}
	else {
		printf("Ȧ���Դϴ�\n");
	}

	printf("----------------------\n");

	switch (n % 2)
	{
	case 0:
		printf("¦���Դϴ�\n");

		switch (n % 3)
		{
		case 0:
			printf("3�� ����Դϴ�\n");
			break;
		default:
			printf("¦��������, 3�� ����� �ƴմϴ�\n");
		}
		break;
	case 1:
		printf("Ȧ���Դϴ�\n");
		break;
	}


	getchar();
	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}