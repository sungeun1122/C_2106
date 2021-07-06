#include <stdio.h>
#pragma warning(disable:4996)

// person 구조체 정의
struct person {
	char name[20]; // 이름
	int age; // 나이
	double weight; // 몸무게
};

typedef struct person PS;

typedef struct _person {
	char name[20]; // 이름
	int age; // 나이
	double weight; // 몸무게
} Person;

// 구조체를 매개변수로 받는 함수
void printPerson(Person p) {
	printf("이름: %s, 나이: %d, 몸무게:%.1f\n", p.name, p.age, p.weight);
}

// 구조체를 매개변수로 넘길시 포인터로 전달하는게 성능상 유리하다
void printPerson2(Person *p) {
	printf("이름: %s, 나이: %d, 몸무게:%.1f\n", p->name, p->age, p->weight);
}


int main()
{
	struct person p0;
	PS p1;  // typedef 으로 정의된 타입명으로 선언 가능
	Person p2;
	Person p3 = { "토르", 100, 90.44 };

	// 구조체의 size
	printf("sizeof(Person) = %d\n", sizeof(Person));  // 32 <-- 일단, 계산 맞는다.

	// 구조체에 대한 포인터
	Person *ptr = &p3;   // *ptr => p3

	printf("이름: %s, 나이: %d, 몸무게:%.1f\n", p3.name, p3.age, p3.weight);
	printf("이름: %s, 나이: %d, 몸무게:%.1f\n", (*ptr).name, (*ptr).age, (*ptr).weight);
	printf("이름: %s, 나이: %d, 몸무게:%.1f\n", ptr->name, ptr->age, ptr->weight);

	// 구조체 배열
	Person people[3];

	people[0].age = 10;
	people[0].weight = 3.4;
	strcpy(people[0].name, "헐크");

	people[1].age = 54;
	people[1].weight = 78.23;
	strcpy(people[1].name, "호구아이");

	people[2].age = 400;
	people[2].weight = 23.88;
	strcpy(people[2].name, "토끼");

	for (int i = 0; i < 3; i++) {
		printf("이름: %s, 나이: %d, 몸무게:%.1f\n",
			//people[i].name, people[i].age, people[i].weight);
			(people + i)->name, (people + i)->age, (people + i)->weight);
	}

	// people => Person[]
	// people[i] => Person
	// people[i].age => int

	printf("\n");
	for (int i = 0; i < 3; i++) {
		printPerson(people[i]);  // 호출시 값 전달 (매개변수 복사 32 byte)  Call By Value
	}

	printf("\n");
	for (int i = 0; i < 3; i++) {
		printPerson2(people + i);  // 호출시 주소 전달 (매개변수 복사 4 byte) Call By Reference
	}


	printf("\nENTER 를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}