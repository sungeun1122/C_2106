#include <stdio.h>
#pragma warning(disable:4996)

/*
*	���ȣ�� (Recursive Call)
*	- �Լ��� �����߿� �ڽ��� �ٽ� ȣ���ϴ� ��.
*   - ������ ������ �ܼ�ȭ�Ͽ� �����ϴ� ����
*	- ������ ���ȣ���� �Ұ�
*/

// n! = n * (n - 1) * (n - 2) * ...  * 1
//    = n * (n - 1)!
//          (n - 1) * (n - 2)!

int factorial(int n)
{
	if (n == 0) return 1;  // 0! <= 1,  ���ȣ�� ���� ����

	return n * factorial(n - 1);
}


int func1(int n)
{
	printf("func1(%d) ȣ��\n", n);
	return func1(n + 1);
}

void bbb();

void aaa()
{
	printf("aaa\n");
	bbb();
}

void bbb()
{
	printf("bbb\n");
	aaa();
}

int main()
{
	//func1(1);  // ���ȣ���ϴ� �״´�. StackOverflow ����
	// aaa();   // StackOverflow ����.  ȣ�⽺���� ������ �߻�.

	int n = 5;
	printf("%d! = %d\n", n, factorial(n));

/*
	factorial(5)
		��  5 * factorial(4)
				��  4 * factorial(3)
						��  3 * factorial(2)
								��  2 * factorial(1)
										��  1 * factorial(0)
*/


	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}

























