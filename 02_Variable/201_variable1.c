#include <stdio.h>
// ���� (Variable) 
// ���α׷����� �����͸� ��� ���� ����
// �� ������ '�̸�' �� �ٿ��� ����.  �� �̸��� ������(variable name) �̶� ��.

// ������ ����ϱ� ���� �ݵ�� ����(declaration) �ؾ� ��.
// ���� ���� ����
//    [���� Ÿ��]  [������];

// ������ '���'�ϱ� ���� �ݵ�� �ʱ�ȭ (initialization) �ؾ� ��.
// �ʱ�ȭ �� '����' �� ���� ����(assign)�ϴ� ��

// Ư�� ��(block) �ȿ��� ������ ������ ��������(local variable) �̶� ��

int main()
{
	printf("����(Variable)\n");

	int a;  // int Ÿ���� ���� a ����.  int Ÿ�� : ���� Ÿ��(integer)
	int b;
	int c;
	int mike, jane;   // �ѹ��� ������ ���� ���� ����

	// printf("���Ĺ��ڿ�")
	// ���Ĺ��ڿ�(format string) �ȿ� ����������(format specifier) : %d, %f..
	printf("�� ���̴� 23���Դϴ�\n");
	printf("�� ���̴� %d���Դϴ�\n", 34);
	printf("�� ���̴� %d���Դϴ�\n", 10 + 9);
	printf("%d ���� ���� %d ���� �Ǵ����Դϴ�\n", 2021, 24);

	a = 100;   // ���� a �� ������ 100 �� ����(assign)
				// ������ ���ʷ� ���� �����ϴ� ���� '�ʱ�ȭ'�� �Ѵ�.
				// = : ���Կ����� (assignment operator)

	printf("a = %d\n", a);
	printf("a x a = %d\n", a * a);

	a = 200;  // ���� a �� ������ 200 �� ���� (�����)
	printf("%d + %d = %d\n", a, a, a + a);

	//printf("x = %d\n", x);  // ������� ���� ������ ��� �Ұ�
	//int x;  // ������ ������ '����' ���� ��� �����ϴ�

	//printf("mike = %d, jane = %d\n", mike, jane);  // �ʱ�ȭ ���� ���� ���� ��� �Ұ�.

	// ������ �ۼ��� ����
	// ������, ����, _ �� ��������
	// ���ڷ� �����ϸ� �ȵ�!
	// ���� �ȵ�!
	// ��ҹ��� ������!  (ex: mike, Mike <-- �ٸ�������) 
	// Ű����(�����)�� ��� �Ұ� (ex: for, if, return...)

	int hello_my_world2020;  // OK
	//int a;   // ������ �̸��� �������� �ߺ� ���� �Ұ�
	int aaaa, AAAA, Aaaa, aaaA;  // ��ҹ��� ����
	int _total_;  // _ �� �����ϴ� ���� ����.

	//int 2021football;  // ���ڽ��� �ȵǿ�.
	//int return;  // Ű���� �ȵǿ�
	//int my world;  // ���� �ȵǿ�

	// comment ����Ű : CTRL+K,C
	// uncomment  : CTRL+K,U

	getchar();
	return 0;
}