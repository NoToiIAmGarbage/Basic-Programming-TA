#include<bits/stdc++.h>
using namespace std;
int main() {
	int k; cin >> k;
	for(int i = 0; i < k; i ++) {
		int m, n, p; scanf("%d%d%d", &m, &n, &p);
		
		int arr1[m + 5][n + 5];
		for(int i = 1; i <= m; i ++) {
			for(int j = 1; j <= n; j ++) {
				scanf("%d", &arr1[i][j]);
			}
		}
		for(int i = 1; i <= n; i ++) {
			for(int j = 1; j <= p; j ++) {
				scanf("%d", &arr2[i][j]);
			}
		}
		for(int i = 1; i <= m; i ++) {
			for(int j = 1; j <= p; j ++) {
				int t = 0;
				for(int k = 1; k <= n; k ++) {
					t += arr1[i][k] * arr2[k][j];
				}
				printf("%d ", t);
			}
			printf("\n");
		}
		system("pause");
		return 0;

	}
}