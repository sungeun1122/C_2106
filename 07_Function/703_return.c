#include <stdio.h>
#pragma warning(disable:4996)

// �ΰ��� ����(int) ���� �޾Ƽ�,  ������ �����ϰ� 
// �� ����� ����(int)�ϴ� �Լ� add �����ϱ�

// �Լ��̸� : add
// �Ű����� : int, int
// ���ϰ� : int (�� �Ű������� ������ ����� ����)

int add(int a, int b) {
	int sum = a + b;
	return sum;  // return �� : �Լ� ���� ȣ���� ������ �� ����
}

// �Լ��̸� : sub
// �Ű����� : int, int
// ���ϰ� : int  (�� �Ű������� �� ����� ����)
int sub(int a, int b)
{
	return a - b;
}

// ���ϰ��� ���� �Լ��� void ���
void mul(int a, int b) {
	printf("mul() ȣ��\n");
	//return;  // �Լ� �����߿� return �� ������ ��ٷ� ����, ����
	printf("%d x %d = %d\n", a, b, a * b);
	
}

// ���� �̸��� �Լ� ���� �Ұ�
//float mul(float a, float b) {
//	return a * b;
//}

// �Լ� ���� (function declaration)
// �Լ� ���ǰ� ȣ��� ���Ŀ� �ְų�, Ȥ�� �ٸ� ���Ͽ� �ִ� ���
// �̸� �Լ� ������ ���־� ������ ������ ��.
// �Լ����𱸹�
//     ����Ÿ�� �Լ��� (�Ű����� ...);    <-- �Լ��� ������Ÿ��(����: prototype) �̶�� ��

double half(double);  // ����ο��� �Ű������� ���� ����


int main()
{
	int result = add(100, 40); // �Լ�ȣ��. �ᱣ��(���ϰ�)�� result �� ����
	printf("result = %d\n", result);

	printf("40�� 30�� ���� ���� = %d\n", add(40, 30));
	printf("40 - 30 = %d\n", sub(40, 30));

	result = add(add(10, 20), sub(40, 80));
	printf("result = %d\n", result);

	mul(40, 30);

	printf("41 �� 2�� ���� ����� %.1f\n", half(41));

	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}

// C���� 
// �Լ� ȣ��(���)�ϱ� ���� ��.��.�� ���� '����' �Ǿ� �ְų� Ȥ�� '����' �Ǿ� �־�� �Ѵ�.
double half(double arg) {
	return arg / 2;
}