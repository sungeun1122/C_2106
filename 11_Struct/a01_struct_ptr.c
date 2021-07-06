#include <stdio.h>
#pragma warning(disable:4996)

// person ����ü ����
struct person {
	char name[20]; // �̸�
	int age; // ����
	double weight; // ������
};

typedef struct person PS;

typedef struct _person {
	char name[20]; // �̸�
	int age; // ����
	double weight; // ������
} Person;

// ����ü�� �Ű������� �޴� �Լ�
void printPerson(Person p) {
	printf("�̸�: %s, ����: %d, ������:%.1f\n", p.name, p.age, p.weight);
}

// ����ü�� �Ű������� �ѱ�� �����ͷ� �����ϴ°� ���ɻ� �����ϴ�
void printPerson2(Person *p) {
	printf("�̸�: %s, ����: %d, ������:%.1f\n", p->name, p->age, p->weight);
}


int main()
{
	struct person p0;
	PS p1;  // typedef ���� ���ǵ� Ÿ�Ը����� ���� ����
	Person p2;
	Person p3 = { "�丣", 100, 90.44 };

	// ����ü�� size
	printf("sizeof(Person) = %d\n", sizeof(Person));  // 32 <-- �ϴ�, ��� �´´�.

	// ����ü�� ���� ������
	Person *ptr = &p3;   // *ptr => p3

	printf("�̸�: %s, ����: %d, ������:%.1f\n", p3.name, p3.age, p3.weight);
	printf("�̸�: %s, ����: %d, ������:%.1f\n", (*ptr).name, (*ptr).age, (*ptr).weight);
	printf("�̸�: %s, ����: %d, ������:%.1f\n", ptr->name, ptr->age, ptr->weight);

	// ����ü �迭
	Person people[3];

	people[0].age = 10;
	people[0].weight = 3.4;
	strcpy(people[0].name, "��ũ");

	people[1].age = 54;
	people[1].weight = 78.23;
	strcpy(people[1].name, "ȣ������");

	people[2].age = 400;
	people[2].weight = 23.88;
	strcpy(people[2].name, "�䳢");

	for (int i = 0; i < 3; i++) {
		printf("�̸�: %s, ����: %d, ������:%.1f\n",
			//people[i].name, people[i].age, people[i].weight);
			(people + i)->name, (people + i)->age, (people + i)->weight);
	}

	// people => Person[]
	// people[i] => Person
	// people[i].age => int

	printf("\n");
	for (int i = 0; i < 3; i++) {
		printPerson(people[i]);  // ȣ��� �� ���� (�Ű����� ���� 32 byte)  Call By Value
	}

	printf("\n");
	for (int i = 0; i < 3; i++) {
		printPerson2(people + i);  // ȣ��� �ּ� ���� (�Ű����� ���� 4 byte) Call By Reference
	}


	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}