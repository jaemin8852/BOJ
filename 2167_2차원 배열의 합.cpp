//2167_2차원 배열의 합
#include <cstdio>
#include <algorithm>
using namespace std;

int DP[301][301], n, m, k, i, j, x, y, tmp;

int main() {
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			scanf("%d", &tmp);
			DP[i][j] = DP[i - 1][j] + DP[i][j - 1] - DP[i - 1][j - 1] + tmp;
		}
	}

	scanf("%d", &k);

	while (k--) {
		scanf("%d %d %d %d", &j, &i, &y, &x);
		printf("%d\n", DP[y][x] - DP[y][i - 1] - DP[j - 1][x] + DP[j-1][i-1]);
	}
	
	return 0;
}
