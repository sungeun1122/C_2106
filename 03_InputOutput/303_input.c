#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	float height, weight;
	printf("키를 입력하세요 (cm) : ");
	scanf("%f", &height);
	printf("체중을 입력하세요 (kg) : ");
	scanf("%f", &weight);

	printf("키: %.1fcm 체중: %.1fkg\n", height, weight);

	double d1;
	printf("실수를 입력하세요: ");
	scanf("%lf", &d1);  // double 입력받을때는 %lf 사용
	printf("입력한 실수는 %.12f 입니다\n", d1);

	getchar();
	getchar();
	return 0;
}