#pragma warning(disable:4996)
#include<stdio.h>
char let[100] ;
int i,count=0;
int main() {
	scanf("%s", let);
	for (i = 0;; i++) {
		if (let[i] == NULL)
			break;
		printf("%c", let[i]);
		if (i % 10 == 9)
			 printf("\n");
		
	}
	getch();
	return 0;
}
/*
char let[100];
int i, count = 0;
int main() {
	scanf("%s", let);
	for (i = 0;i<strlen(let); i++) {
		printf("%c", let[i]);
		if (i % 10 == 9)
			printf("\n");
	}
	getch();
	return 0;
}
*/
//strlen()==�ش� ������ �Էµ� �������� ���̸� �߱��Ѵ�!!