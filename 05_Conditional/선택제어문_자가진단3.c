#include <stdio.h>
#pragma warning(disable:4996)

/*
���̸� �Է¹޾� 20�� �̻��̸� "adult"��� ����ϰ�
�׷��� ������ �� ���Ŀ� ������ �Ǵ����� "�� years later"���
�޽����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
int main()
{
	int age;
	scanf("%d", &age);

	if (age >= 20)
		printf("adult");
	else
		printf("%d years later", 20 - age);

	getchar();
	printf("\nENTER ������ ���α׷��� �����մϴ�\n");
	getchar();
	return 0;
}