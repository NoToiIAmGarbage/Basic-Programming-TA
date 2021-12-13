#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cassert>
using namespace std;
bool V[2][100005];
void output(char** A, int s1, char** B, int s2) {
	printf("A:\n");
	for(int i = 0; i < s1; i ++) {
		if(!V[0][i]) {
			printf("(null)\n");
		}
		else {
			printf("%s\n", A[i]);
		}
	}
	printf("B:\n");
	for(int i = 0; i < s2; i ++) {
		if(!V[1][i]) {
			printf("(null)\n");	
		}
		else {
			printf("%s\n", B[i]);
		}
	}
}
int main() {
	cout << "set the size of array A and B:";
	int S[2]; cin >> S[0] >> S[1];
	char **arr[2];
	arr[0] = (char**)malloc(S[0] * sizeof(char*));
	arr[1] = (char**)malloc(S[1] * sizeof(char*));
	while(true) {
		cout << "0 : add a book, 1: delete a book, 2: exchange the books\n";
		int d; cin >> d;
		if(d == 0) {
			int x, y, s; cin >> x >> y >> s;
			if(y < S[x] && !V[x][y]) {
				arr[x][y] = (char*)malloc(s * sizeof(char));
				V[x][y] = true;
				scanf("%s", arr[x][y]);
			}
		}
		else if(d == 1) {
			int x, y; cin >> x >> y;
			if(y < S[x]) {
				free(arr[x][y]);
				V[x][y] = false;
			}
		}
		else {
			int x, y; cin >> x >> y;
			if(x < S[0] && y < S[1]) {
				swap(arr[0][x], arr[1][y]);
			}
		}
		output(arr[0], S[0], arr[1], S[1]);
	}
	return 0;
}