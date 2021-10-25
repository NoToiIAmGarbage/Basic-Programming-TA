#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int pas, t;
	printf("Input a five digit number as the password: ");
	scanf("%d", &pas);
	int cnt = 3;
	while(cnt) {
		printf("Input the password (%d chance%c left) : ", cnt, (cnt > 1 ? 's' : ' '));
		scanf("%d", &t);
		if(pas == t) {
			printf("The password is correct, welcome back.\n");
			system("pause");
			return 0;
		}
		cnt --;
	}
	printf("Incorrect password for over three times!!\n");
	system("pause");
	return 0;
}