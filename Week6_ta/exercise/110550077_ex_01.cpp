#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
const char table[26][5] = {
    "*-", //A
    "-***", //B
    "-*-*", //C
    "-**", //D
    "*", //E
    "**-*", //F
    "--*", //G
    "****", //H
    "**", //I
    "*---", //J
    "-*-", //K
    "*-**", //L
    "--", //M
    "-*", //N
    "---", //O
    "*--*", //P
    "--*-", //Q
    "*-*", //R
    "***", //S
    "-", //T
    "**-", //U
    "***-", //V
    "*--", //W
    "-**-", //X
    "-*--", //Y
    "--**" //Z
};
char str[1005];
int arr[1005];
char map(char* arr, int m) {
    for(int i = 0; i < 26; i ++) {
        bool yes = true;
        int siz = strlen(table[i]);
        if(siz != m) {
            continue;
        }
        for(int j = 0; j < siz; j ++) {
            if(arr[j] != table[i][j]) {
                yes = false;
                break;
            }
        }
        if(!yes) {
            continue;
        }
        return (char)(i + 'A');
    }
    return '*';
}
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    while(scanf("%s", str) != EOF) {
        int siz = strlen(str), m = 0, now = 1;
        for(int i = 1; i < siz; i ++) {
            if(str[i] != str[i - 1]) {
                arr[m ++] = now;
                now = 1;
            }
            else {
                now ++;
            }
        }
        arr[m ++] = now;
        char tmp[10]; int t = 0;
        for(int i = 0; i < m; i ++) {
            if(i & 1) {
                if(arr[i] == 7) {
                    printf("%c ", map(tmp, t));
                    t = 0;
                }
                else if(arr[i] == 3) {
                    printf("%c" ,map(tmp, t));
                    t = 0;
                }
            }
            else {
                if(arr[i] == 3) {
                    tmp[t ++] = '-';
                }
                else {
                    tmp[t ++] = '*';
                }
            }
        }
        printf("%c\n", map(tmp, t));
    }
    return 0;
}
