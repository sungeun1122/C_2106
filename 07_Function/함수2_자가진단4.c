#include <stdio.h>
#define _USE_MATH_DEFINES   // ���а��� ����� ���
#include <math.h>   // ���а��� �Լ���
#pragma warning(disable:4996)

// ���ǳ��̸� �Ű������� �޾Ƽ� (�Է�)
// �������� ����Ͽ�(����)
// ����� ������ ���� (���)
double calcRadiusFromArea(double);  // ����


int main()
{
	{
		//printf("%f\n", pow(2, 4));
		//printf("%f\n", pow(2, -1));
		//printf("%f\n", pow(2, -2));
		//printf("%f\n", pow(2, 1.0 / 2.0));
		//printf("%f\n", pow(27, 1.0 / 3.0));
		//printf("�������� %.10f\n", M_PI);
	}

	double area;
	scanf("%lf", &area);

	printf("%.2f\n", calcRadiusFromArea(area));

	getchar();
	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}


double calcRadiusFromArea(double area)  // �Լ� ����
{
	return pow(area / 3.14, 1.0 / 2.0);
}