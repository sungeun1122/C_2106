#include <stdio.h>
#pragma warning(disable:4996)  // scanf ������ ���� ����

// �Է�: (input) - Ű����(�⺻ standard input), ���콺, ��Ʈ��ũ, ����...
// ���: (output) - �����(�⺻ standard output), ������, ��Ʈ��ũ, ����..

int main()
{
	printf("scanf() �Է�\n");
	int kor, eng, math;
	printf("���������� �Է��ϼ��� : ");
	scanf("%d", &kor);  // Ű����κ��� ���� �Ѱ� �Է� -> kor ������ ����
						// ���Թ��� ������ �տ� & ���̱�

	printf("���������� �Է��ϼ��� : ");
	scanf("%d", &eng);
	printf("���������� �Է��ϼ��� : ");
	scanf("%d", &math);

	printf("�Է��Ͻ� ������ %d, %d, %d�Դϴ�\n", kor, eng, math);

	// ����, ��� ���ϱ�
	int total = kor + eng + math;
	printf("������ : %d ��\n", total);
	//float avg = total / 3;  // ���� �� ������ �������� '����' Ÿ��!

	//float avg = total / 3.0;  // �Ǽ����� �������� '�Ǽ�'

	float avg = (float)total / 3;  // ����ȯ������ ����Ͽ� �Ǽ�Ÿ������ ����

	printf("����� : %.1f ��\n", avg);

	getchar();
	getchar();
	return 0;
}