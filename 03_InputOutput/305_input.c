#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	// ���ڿ� �Է�
	char name[20];  // �ִ� 20���� ������ �ִ� ���ڿ� name

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", name);  // ���ڿ� �Է¹������� & ������ ����.
			// %s : ������� ���ڿ� �Է�
	printf("�Է��Ͻ� �̸��� : %s\n", name);

	getchar();

	// �� ��(line) �Է�
	printf("full-name �� �Է��ϼ��� : ");
	gets(name);  // ���� �����ؼ� ENTER �Էµɶ����� ���� �Է�
	printf("�̸��� %s �Դϴ�\n", name);


	getchar(); getchar();
	return 0;
}