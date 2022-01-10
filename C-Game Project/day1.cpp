#pragma warning(disable:4996)
#include <stdio.h>
typedef struct Person {
	char name[10];
	int age, grade, mat, eng, kor;
	 
}Person;

int main()
{
	Person stu;
	printf("이름: ");
	scanf("%s", stu.name); 
	printf("나이: ");
	scanf("%d", &stu.age);
	printf("학년: ");
	scanf("%d", &stu.grade);
	printf("수학: ");
	scanf("%d", &stu.mat);
	printf("국어: ");
	scanf("%d", &stu.kor);
	printf("영어: ");
	scanf("%d", &stu.eng);
	int avg = (stu.mat + stu.kor + stu.eng) / 3;
	printf("이름:%s\n나이:%d\n학년:%d\n수학:%d\n국어:%d\n영어:%d\n평균점수:%d", stu.name, stu.age, stu.grade, stu.mat, stu.kor, stu.eng,avg);
	return 0;

}