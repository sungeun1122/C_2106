#include <stdio.h>
#pragma warning(disable:4996)

/* �迭(array)
*	������ Ÿ���� ������(��)�� '�ϳ��� �迭�̸�' ���� ��Ƴ��� ���յ�����
*
*	�迭 ���� ����
*		Ÿ�� �迭������[�迭ũ��];
*		Ÿ�� �迭������[] = { �ʱ�ȭ ��(��)..};
*
*  �迭 ÷��(index)�� ����Ͽ� ������ �迭����(element) ���.
*       �迭 ÷�ڴ� 0 ���� ����!
*/

int main()
{
	// �� �迭?
	int kor1 = 88;  // 1�� �л��� ��������
	int kor2 = 99;
	int kor3 = 77;
	// ...
	int total = kor1 + kor2 + kor3;
	// ������ Ÿ�԰� ������ �����͸� ���� �Ź� �ٸ� �̸��� ������ ����??  �Ұ���!

	// 5���� int Ÿ�� �����͸� ��� �迭 ����
	int korArr[5];

	// �迭 ÷��(index)�� ����Ͽ� ������ �迭����(element) ���.
	// �迭 ÷�ڴ� 0 ���� ����!
	// korArr[0] ~ korArr[4]  

	korArr[0] = 100;
	korArr[1] = 90;
	korArr[2] = 88;
	korArr[3] = 43;
	korArr[4] = 76;

	printf("ù��° �л� ���� : %d\n", korArr[0]);
	printf("�ι�° �л� ���� : %d\n", korArr[1]);

	// ��ȯ�� ���
	for (int i = 0; i < 5; i++) {
		printf("%d ��° �л��� ���� : %d\n", i + 1, korArr[i]);
	}

	// ���� ���ϱ�
	printf("-------------------------------------\n");

	total = 0;
	for (int i = 0; i < 5; i++) {
		total += korArr[i];  // ���� �ջ�
	}
	printf("���� ����: %d\n", total);
	printf("���: %.1f\n", total / 5.0);


	// C��� ����!
	// �迭 �ε��� ����!  ����� ���� �ȳ�.. .
	//    �����Ⱚ(garbage value) ����.
	printf("-------------------------------------\n");
	printf("korArr[5] = %d\n", korArr[5]);
	printf("korArr[-1] = %d\n", korArr[-1]);


	// korArr �� Ÿ���� ? => int[]
	// korArr[0] �� Ÿ���� ? => int

	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}