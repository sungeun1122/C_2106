#include <stdio.h>

/* �� �������� (local variable)
*   �� :  {  .... }
*
*   �� �ȿ��� ����� ������ �������� ���ȿ����� ��밡����
*   ���� ������ �ش� �̸��� ������ ��� �Ұ�
*
*   �̷��� ������ ��������(local variable) �̶� �ϰ�
*    local scope (���� ����) �� ���´� ��� ���մϴ�.
*    scope �� �ش� �̸��� ����Ҽ� �ִ� ����
*
*  �� �������� (global variable)
*    �Լ� �ۿ��� ����� ����
*    ����� ���� ��� �������� ��� ����.
*    global scope �� ���´�.
*/

int YEAR = 2021;   // �������� YEAR ���� �� �ʱ�ȭ

int main()
{
	int grade = 4;  // ���� ����� ���ÿ� �ʱ�ȭ ����.

	printf("YEAR = %d\n", YEAR);

	{
		int a = 100;
		printf("a = %d\n", a);
		printf("grade = %d\n", grade);
		YEAR = 1998;
	}
	//printf("a = %d\n", a);
	printf("grade = %d\n", grade);

	printf("YEAR = %d\n", YEAR);


	int age = 30;  
	{
		int age = 60;
		{
			int age = 80;
			printf("age = %d\n", age);
		}
		printf("age = %d\n", age);
	}
	printf("age = %d\n", age);




	getchar();
	return 0;
}