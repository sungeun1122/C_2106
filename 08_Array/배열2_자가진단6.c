#include <stdio.h>
#pragma warning(disable:4996)

#define NUM_STU 5     // 학생수
#define NUM_SUBJ 4    // 과목의 개수

/*
85 67 95 65
80 95 86 56
100 98 67 86
95 76 84 65
67 86 90 76

*/
int main()
{
	int point[NUM_STU][NUM_SUBJ];  // 5명 x 4과목 점수를 담을 2차원 배열

	for (int stu = 0; stu < NUM_STU; stu++) {
		for (int subj = 0; subj < NUM_SUBJ; subj++) {
			scanf("%d", &point[stu][subj]);
		}
	}

	int success = 0;  // 합격학생수

	// 학생별 평균 계산
	for (int stu = 0; stu < NUM_STU; stu++) {

		int sum = 0;   // 총점 
		double avg = 0.0; // 평균

		// 위 학생(stu) 의 4과목 점수 합산
		for (int subj = 0; subj < NUM_SUBJ; subj++) {
			sum += point[stu][subj];
		}
		avg = (double)sum / NUM_SUBJ;  // 평균계산!

		// 합격여부
		if (avg >= 80) {
			printf("pass\n");
			success++;  // 합격자수 추가
		}
		else {
			printf("fail\n");
		}
	} // end for

	printf("Successful : %d\n", success);

	getchar();
	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}