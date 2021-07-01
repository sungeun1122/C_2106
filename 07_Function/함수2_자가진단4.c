#include <stdio.h>
#define _USE_MATH_DEFINES   // 수학관련 상수들 사용
#include <math.h>   // 수학관련 함수들
#pragma warning(disable:4996)

// 원의넓이를 매개변수로 받아서 (입력)
// 반지름을 계산하여(동작)
// 계산한 반지름 리턴 (출력)
double calcRadiusFromArea(double);  // 선언


int main()
{
	{
		//printf("%f\n", pow(2, 4));
		//printf("%f\n", pow(2, -1));
		//printf("%f\n", pow(2, -2));
		//printf("%f\n", pow(2, 1.0 / 2.0));
		//printf("%f\n", pow(27, 1.0 / 3.0));
		//printf("원주율값 %.10f\n", M_PI);
	}

	double area;
	scanf("%lf", &area);

	printf("%.2f\n", calcRadiusFromArea(area));

	getchar();
	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}


double calcRadiusFromArea(double area)  // 함수 정의
{
	return pow(area / 3.14, 1.0 / 2.0);
}