#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	// char �� �Է¹����� ����
	char ch;
	int a, b;
	printf("���� �ϳ� �Է� : ");
	scanf("%c", &ch);
	printf("ch = %c\n", ch);

	printf("���� �ϳ� �Է� : ");
	scanf("%d", &a);

	printf("a = %d, ch = %c\n", a, ch);

	getchar();   // ���ڵ� �Է��Ŀ� %c �Է¹������� ������ '\n' ����

	printf("�Ǵٽ� ���� �ϳ� �Է� : ");
	scanf("%c", &ch);
	printf("a = %d, ch = %c\n", a, ch);

	getchar();
	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}