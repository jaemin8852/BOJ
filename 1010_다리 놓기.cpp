//1010_다리 놓기
#include <cstdio>

int DP[31][31];
int T, n, m;

int main() {
	scanf("%d", &T);

	for (int i = 1; i <= 30; ++i) DP[1][i] = i;

	for (int i = 2; i <= 30; ++i) {
		for (int j = i; j <= 30; ++j) {
			for (int k = j; k >= i; --k) {
				DP[i][j] += DP[i - 1][k - 1];
			}
		}
	}
	
	while (T--) {
		scanf("%d %d", &n, &m);
		printf("%lld\n", DP[n][m]);
	}

	return 0;
}
