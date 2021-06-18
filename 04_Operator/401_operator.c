#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	printf("��� ������ +, -, *, /, % \n");

	int result;
	result = 4 * 2 + 6 / 2;
	printf("result = %d\n", result);

	result = 4 * (2 + 6) / 2;
	printf("result = %d\n", result);

	// % : ������ ������
	result = 10 % 3;
	printf("result = %d\n", result);

	// ���� ���� ������
	// +=, -=, *=, /=, %= ..... ��κ��� ���׿����ڿ� ���� ���մ��Կ����� ����
	int n = 10;
	n = n + 3; // '������ ���� ��' �� +3 ����
	n += 3;   // ���� ������ ������ �ϴ� ���� ���Կ�����
	printf("n = %d\n", n);

	n %= 5;   // n = n % 5
	printf("n = %d\n", n);

	n -= 32;
	printf("n = %d\n", n);

	// ����������
	// ++, --
	n = 10;
	n = n + 1;
	n += 1;
	n++;   // ������ n �� +1 ����
	printf("n = %d\n", n);

	n--;  // postfix ���
	--n;  // prefix ���
	printf("n = %d\n", n);

	// postfix ��� : �������� '����' �� �������� ����
	// prefix ��� :  �������� '����' �� �������� ����

	int num1 = 5;
	int num2 = num1++ + 4;
	printf("num1 = %d, num2 = %d\n", num1, num2);

	num1 = 5;
	num2 = ++num1 + 4;
	printf("num1 = %d, num2 = %d\n", num1, num2);

	// �� �������̸� ���������ڴ� ����� '��'���� ����ϴ� ���� ������
	// num1 = 5;
	// num2 = num1 + 4;
	// num1++;

	// ��� ������ ����� �ִ�. (��, Ÿ�� �ָ�)
	// ������ '���Կ�����' �� ����� �ִ�.
	printf("num1 = %d\n", num1 = 2);

	int num3 = num2 = num1;

	// �񱳿�����(���迬����)
	// ����� '��' �̸� 1,  '����' �̸� 0 
	// > , < , >=, <=, ==, != ...
	printf("\n�񱳿�����\n");
	printf("10 > 3 = %d\n", 10 > 3);
	printf("10 < 3 = %d\n", 10 < 3);
	printf("10 >= 10 = %d\n", 10 >= 10);   // '=>'  (X)
	printf("10 == 10 = %d\n", 10 == 10);   // '='  (X) ���Կ����ڿ� �򰥸��� ����.
	printf("10 != 10 = %d\n", 10 != 10);

	// ��������
	// &&, ||, !
	// && : and ������, ���� ����, �ǿ����� ������ �Ѵ� '��' �� ��츸 ��
	// || : or ������,  ���� ���� ,  �ǿ����� ������ ���� �ϳ��� ���̾ ��
	// ! : not ������,  ��->����, ����->�� 

	/*

	T && T == >  T(1)
	T && F == >  F(0)
	F && T == >  F(0)
	F && F == >  F(0)

	T || T == >  T(1)
	T || F == >  T(1)
	F || T == >  T(1)
	F || F == >  F(0)

	!T == >  F(0)
	!F == >  T(1)

	*/

	printf("��������\n");
	result = (10 > 4) && (45 < 90);
	printf("result = %d\n", result);

	result = (10 < 4) && (45 < 90);
	printf("result = %d\n", result);


	// C���� 0 �� '����',  0 �̿��� ���� '��' ���� �����Ѵ�.
	// java, python ���� boolean Ÿ�� ����

	result = 10 - 10 || 100 + 1;
	printf("result = %d\n", result);

	result = 10 - (10 || 100) + 1;
	printf("result = %d\n", result);

	result = -10 && -100;
	printf("result = %d\n", result);

	// ! : not ������
	result = 54 % 2 == 0;
	printf("result = %d\n", result);

	result = !(54 % 2 == 0);
	printf("result = %d\n", result);

	printf("%d, %d, %d\n", 100 * 2, -1, 0);    // 200, -1, 0
	printf("%d, %d, %d\n", !(100 * 2), !(-1), !(0));  // 0, 0, 1



	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}