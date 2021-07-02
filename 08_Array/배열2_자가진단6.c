#include <stdio.h>
#pragma warning(disable:4996)

#define NUM_STU 5     // �л���
#define NUM_SUBJ 4    // ������ ����

/*
85 67 95 65
80 95 86 56
100 98 67 86
95 76 84 65
67 86 90 76

*/
int main()
{
	int point[NUM_STU][NUM_SUBJ];  // 5�� x 4���� ������ ���� 2���� �迭

	for (int stu = 0; stu < NUM_STU; stu++) {
		for (int subj = 0; subj < NUM_SUBJ; subj++) {
			scanf("%d", &point[stu][subj]);
		}
	}

	int success = 0;  // �հ��л���

	// �л��� ��� ���
	for (int stu = 0; stu < NUM_STU; stu++) {

		int sum = 0;   // ���� 
		double avg = 0.0; // ���

		// �� �л�(stu) �� 4���� ���� �ջ�
		for (int subj = 0; subj < NUM_SUBJ; subj++) {
			sum += point[stu][subj];
		}
		avg = (double)sum / NUM_SUBJ;  // ��հ��!

		// �հݿ���
		if (avg >= 80) {
			printf("pass\n");
			success++;  // �հ��ڼ� �߰�
		}
		else {
			printf("fail\n");
		}
	} // end for

	printf("Successful : %d\n", success);

	getchar();
	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}