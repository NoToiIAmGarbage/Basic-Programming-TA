#define _CTR_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void __creat() {
	FILE *fptr = fopen("self_introduction.txt", "w");
	char intro[3][100] = {
		"My name is WU TING AN\n",
		"I am a BOY\n",
		"18 years old\n"
	};
	for(int i = 0; i < 3; i ++) {
		fputs(intro[i], fptr);
	}
	fclose(fptr);
}
void __convert() {
	FILE *fptr = fopen("self_introduction.txt", "r");
	char str[1000];
	while(fgets(str, 1000, fptr) != nullptr) {
		for(int i = 0; i < strlen(str); i ++) {
			if('A' <= str[i] && str[i] <= 'Z') {
				str[i] += 'a' - 'A';
			}
			else if('a' <= str[i] && str[i] <= 'z') {
				str[i] -= 'a' - 'A';
			}
			printf("%c", str[i]);
		}
	}
}
int main() {
	__creat();
	__convert();
	system("pause");
}