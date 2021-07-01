#include <stdio.h>
#pragma warning(disable:4996)

/* �迭�� ���ڿ�(string)
*	 - C��� ���� "���ڿ�" �� ��ü�� 'char [] �迭' �̴�
*	 - C����� "���ڿ�"��
*		  ���� '\0' (null ����) �� ������ 'char [] �迭' �̴�
*/

int main()
{
	char str1[20] = "nice";

	printf("str1 = %s\n", str1); // %s -> char �迭���� '\0' ���������� ���
	printf("str1[0] = %c\n", str1[0]);
	printf("str1[1] = %c\n", str1[1]);
	printf("str1[2] = %c\n", str1[2]);
	printf("str1[3] = %c\n", str1[3]);
	printf("str1[4] = %c\n", str1[4]); // '\0'

	//char str2[] = { 'n', 'i', 'c', 'e' };
	char str2[] = { 'n', 'i', 'c', 'e', '\0' };
	printf("str2 = %s\n", str2);

	char str3[] = "nice";  // str3 �� ���̴� 5
	char *str4 = "nice";
	
	printf("%d\n", sizeof(str3));
	printf("str3 = %s\n", str3);
	printf("str4 = %s\n", str4);


	str1[0] = 'D';
	printf("str1 = %s\n", str1);  // "Dice"
	str2[0] = 'V';
	printf("str2 = %s\n", str2);  // "Vice"

	//str4[0] = 'D';
	//printf("str4 = %s\n", str4); // ����

	str2[4] = "#"; // ���ڿ� �ǳ��� '\0' ���� ���� �ϸ�, %s ��½� �����Ⱚ ��µȴ�
	printf("str2 = %s\n", str2);


	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}