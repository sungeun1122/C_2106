#include <stdio.h>
#pragma warning(disable:4996)

/*
10���� ���Ҹ� ������ �� �ִ� �迭�� ������ �� ������ ������ �̿��Ͽ� �ڷḦ �Է¹޾� Ȧ���� ������ ¦���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

[�Է¿�]
3 5 10 52 1 97 36 25 13 29

[��¿�]
odd : 7
even : 3

*/

int main()
{
	int num[10];
	int *p = num;
	int odd = 0;
	int even = 0;
	for (int i = 0; i < 10; i++) {
		//scanf("%d", &p[i]);  //  ����
		scanf("%d", p + i);  // ����
		if (p[i] % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
	}
	printf("odd : %d\neven : %d", odd, even);
	getchar();

	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}