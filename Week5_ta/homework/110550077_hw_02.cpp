#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char arr[100005];
int main() {
	scanf("%s", arr);
	int siz = strlen(arr);
	for(int i = 0; i < 26; i ++) {
		bool yes = false;
		for(int j = 0; j < siz; j ++) {
			if(arr[j] == (char)(i + 'A')) {
				if(!yes) {
					printf("%c: ", (char)(i + 'A'));
					yes = true;
				}
				printf("%d ", j);
			}
		}
		if(yes) {
			printf("\n");
		}
	}
	for(int i = 0; i < 26; i ++) {
		bool yes = false;
		for(int j = 0; j < siz; j ++) {
			if(arr[j] == (char)(i + 'a')) {
				if(!yes) {
					printf("%c: ", (char)(i + 'a'));
					yes = true;
				}
				printf("%d ", j);
			}
		}
		if(yes) {
			printf("\n");
		}
	}
	system("pause");
	return 0;
}