#include <stdio.h>
#pragma warning(disable:4996)

/*
������� - �ڰ�����4
http://jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=168&sca=1050

����ü���� �����԰�
50.80kg ���ϸ� Flyweight,
61.23kg ���ϸ� Lightweight,
72.57kg ���ϸ� Middleweight,
88.45kg ���ϸ� Cruiserweight,
88.45kg �ʰ��� Heavyweight
��� ����.

�����Ը� �Է¹޾� ü���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
int main()
{
	float weight;
	scanf("%f", &weight);

	if (weight <= 50.80)
		printf("Flyweight");
	else if (weight <= 61.23)
		printf("Lightweight");
	else if (weight <= 72.57)
		printf("Middleweight");
	else if (weight <= 88.45)
		printf("Cruiserweight");
	else
		printf("Heavyweight");

	getchar();
	printf("\nENTER ������ ���α׷��� �����մϴ�\n");
	getchar();
	return 0;
}