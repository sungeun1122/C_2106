#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	float height, weight;
	printf("Ű�� �Է��ϼ��� (cm) : ");
	scanf("%f", &height);
	printf("ü���� �Է��ϼ��� (kg) : ");
	scanf("%f", &weight);

	printf("Ű: %.1fcm ü��: %.1fkg\n", height, weight);

	double d1;
	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%lf", &d1);  // double �Է¹������� %lf ���
	printf("�Է��� �Ǽ��� %.12f �Դϴ�\n", d1);

	getchar();
	getchar();
	return 0;
}