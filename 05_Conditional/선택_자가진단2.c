#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	int height; // Ű
	int weight; // ������

	scanf("%d", &height);
	scanf("%d", &weight);

	// �񸸼�ġ ���
	int obesity = weight + 100 - height; 

	printf("%d\n", obesity);

	if (obesity > 0)
		printf("Obesity");
	
	getchar();
	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}