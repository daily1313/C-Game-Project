#pragma warning(disable:4996)
#include <stdio.h>
typedef struct Person {
	char name[10];
	int age, grade, mat, eng, kor;
	 
}Person;

int main()
{
	Person stu;
	printf("�̸�: ");
	scanf("%s", stu.name); 
	printf("����: ");
	scanf("%d", &stu.age);
	printf("�г�: ");
	scanf("%d", &stu.grade);
	printf("����: ");
	scanf("%d", &stu.mat);
	printf("����: ");
	scanf("%d", &stu.kor);
	printf("����: ");
	scanf("%d", &stu.eng);
	int avg = (stu.mat + stu.kor + stu.eng) / 3;
	printf("�̸�:%s\n����:%d\n�г�:%d\n����:%d\n����:%d\n����:%d\n�������:%d", stu.name, stu.age, stu.grade, stu.mat, stu.kor, stu.eng,avg);
	return 0;

}