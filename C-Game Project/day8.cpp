#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void strlencmp(char s1[], char s2[]);
int main(void) {
	char name1[50];
	char name2[50];
	scanf("%[^\n]s", name1);
	getchar();
	scanf("%[^\n]s", name2);
	getchar();

	strlencmp(name1, name2);
	

}
void strlencmp(char s1[], char s2[])
{
	int rest = strcmp(s1, s2);
	switch (rest)
	{
	case 0:
		printf("두 문자열이 같습니다.\n");
		strcat(s1, s2);
		printf("%s", s1);
		break;
	case 1:
		printf("%d", strlen(s1));
		break;
	case -1:
		printf("%d", strlen(s2));
		break;
	}

}

