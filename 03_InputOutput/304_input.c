#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c;
	printf("���� 3�� �Է��ϼ��� : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	// �� ���ٿ� ������ �Է� ����,  �����ٿ� ���� �Էµ� ����

	printf("�� ���� 3�� �Է��ϼ��� : ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	// �� �� ����, ���ٿ� ������ �Է� ����,  �����ٿ� ���� �Էµ� ����

	getchar(); getchar();
	return 0;
}