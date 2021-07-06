#include <stdio.h>
#include <string.h>   // ���ڿ� �Լ����� ����� ��� ����
#pragma warning(disable:4996)

/*
*	���ڿ��� ����(������ ����)�� ��ȯ
*		strlen(���ڿ�������);
*		strlen(���ڹ迭);
*
*	���ڿ� �� ����� ��ȯ
*		strcmp(���ڿ�1, ���ڿ�2);
*		int strcmp(char const *_Str1, char const *_Str2);
*
*		-1: ASCII �ڵ� �������� ���ڿ�2(s2)�� Ŭ ��
*		0: ASCII �ڵ� �������� �� ���ڿ��� ���� ��
*		1: ASCII �ڵ� �������� ���ڿ�1(s1)�� Ŭ ��
*
*	���ڿ� ����
*		strcpy(����ڿ�, �������ڿ�);
*		char *strcpy(char *_Dest, char const *_Source);
*		����ڿ��� �����͸� ��ȯ
*
*	���ڿ� ���̱�
*		strcat(�������ڿ�, ���Ϲ��ڿ�);
*		char *strcat(char *_Destination, char const *_Source);
*		���� ���ڿ��� �����͸� ��ȯ
*
*	���ڿ� �ȿ��� '����'�� �˻�
*		strchr(����ڿ�, �˻��ҹ���);
*		char *strchr(char * const _String, int const _Ch);
*		���ڸ� ã������ ���ڷ� �����ϴ� ���ڿ��� �����͸� ��ȯ, ���ڰ� ������ NULL�� ��ȯ
*
*	���ڿ� �ȿ��� '���ڿ�'�� �˻�
*		strstr(����ڿ�, �˻��ҹ��ڿ�);
*		char *strstr(char * const _String, char const * const _SubString);
*		���ڿ��� ã������ ���ڿ��� �����ϴ� ���ڿ��� �����͸� ��ȯ, ���ڿ��� ������ NULL�� ��ȯ
*
*  ���ڿ� ��ҹ��� ��ȯ
*		strupr(����ڿ�)  : �־��� ����ڿ��� ���� �빮�ڷ� ��ȯ
*		strlwr(����ڿ�)  : �־��� ����ڿ��� ���� �ҹ��ڷ� ��ȯ
*       �������ڿ� ��ȭ�� (����!)
*/
int main()
{
	char *s1 = "Hello";  // ������ s1 �� ���ڿ� "Hello" �� �ּ� ����
	char s2[10] = "Hello"; // ũ�Ⱑ 10�� char �� �迭�� �����ϰ� ���ڿ� Hello ����.

	// ���ڿ��� ���� strlen()
	{
		printf("%d\n", strlen(s1));
		printf("%d\n", strlen(s2));
		printf("%d\n", strlen("Thank you"));
	}

	// ���ڿ� �� strcmp()
	{
		int ret = strcmp(s1, s2);
		printf("%d\n", ret);   // 0 : �� ���ڿ��� ������ 0

		if (strcmp(s1, s2)) {
			printf("%s �� %s �� �ٸ��ϴ�\n", s1, s2);
		}
		else {
			printf("%s �� %s �� �����ϴ�\n", s1, s2);
		}

		// aaa�� ASCII �ڵ�� 97 97 97
		// aab�� ASCII �ڵ�� 97 97 98
		// aac�� ASCII �ڵ�� 97 97 99

		printf("%d\n", strcmp("aaa", "aaa"));
		printf("%d\n", strcmp("aab", "aaa"));
		printf("%d\n", strcmp("aab", "aac"));
		printf("%d\n", strcmp("aAaA", "AaAa"));
	}

	// ���ڿ� ���� strcpy()
	{
		char s1[10] = "Hello"; // �������� s1[10] �� '����' ������ ������. <-- ���� ����
		char s2[10] = "Mickey";
		printf("strcpy() �� s2 = %s\n", s2);

		strcpy(s2, s1);  // s1 �� ���ڿ��� s2 �� ����.

		printf("strcpy() �� s2 = %s\n", s2);

		s2[1] = 'a';  // ���ÿ��� <-- ���� ����
		printf("%s\n", s2);
	}
	{
		// ����
		char *s1 = "Hello";  // ���ڿ� ������� ����� '������ ����(data segment)'�� ���� <-- ���� �Ұ�(read only)
		char *s2 = "Mickey";
		// �� VS2017 �̻󿡼� ���ڿ� ���ͷ��� const char* �� �����Ѿ� �Ѵ�.

		//strcpy(s2, s1);  // ���࿡��?

		// s2[1] = 'a';  // "Mackey"???  ���࿡�� 

		printf("%s\n", s2);
	}

	// ���ڿ� ���̱� strcat()  string concatenation
	{
		char s1[10] = "world";
		char s2[20] = "Hello";

		printf("strcat() ������ s2 = %s\n", s2);

		strcat(s2, s1);  // s2 �ڿ� s1 �� ����

		printf("strcat() ������ s2 = %s\n", s2);
	}

	// ���ڿ� �ȿ��� ���ڷ� �˻� strchr()
	{
		char s1[30] = "A Garden Diary abc aaa";

		char *ptr = strchr(s1, 'a');  // ���ڿ� s1 ���� ���� 'a' �� �˻�.  ã�� ��ġ�� ������ ����

		//ptr = strchr(s1, 'x');  // ������ NULL ����

		if (ptr) {
			printf("%d ��°���� ã�Ҵ�\n", ptr - s1);
		}
		else {
			printf("����\n");
		}

		printf("%s\n", ptr);

		while (ptr != NULL)  // �� �̻� �˻��� '����' �� ���������� �ݺ� �˻�
		{
			printf("%d ��°���� �߰� %s\n", ptr - s1, ptr);
			ptr = strchr(ptr + 1, 'a');  // �����Ϳ� +1 ���Ͽ�, �߰ߵ� �������� �ٽ� �˻�
		}
	}

	// ���ڿ� �ȿ��� ���ڿ��� �˻� strstr()
	{
		char s1[30] = "A Garden Diary";

		char *ptr = strstr(s1, "den");  // ���ڿ� s1 ���� "den" �˻�, �߰��� ��ġ�� ������ ����
		if (ptr) {
			printf("%d ��°���� ã�Ҵ�\n", ptr - s1);
		}
		else {
			printf("����\n");
		}
	}

	// ���ڿ� ��ҹ��� ��ȯ strupr(), strlwr()
	{
		char s1[30] = "A Garden Diary";
		printf("strupr() => %s, s1 => %s\n", strupr(s1), s1);  // ���� ��ȭ
		printf("strlwr() => %s, s2 => %s\n", strlwr(s1), s1);  // ���� ��ȭ
	}




	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}