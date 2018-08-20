//9465_스티커
#include <cstdio>
#include <algorithm>
using namespace std;

int DP[2][100001], arr[2][100001], n, T;

int main() {
	scanf("%d", &T);

	while (T--) {
		scanf("%d", &n);

		for (int i = 0; i < 2; ++i) {
			for (int j = 1; j <= n; ++j) {
				scanf("%d", &arr[i][j]);
			}
		}

		DP[0][1] = arr[0][1], DP[1][1] = arr[1][1];

		for (int i = 2; i <= n; ++i) {
			DP[0][i] = max(DP[1][i - 1], DP[1][i - 2]) + arr[0][i];
			DP[1][i] = max(DP[0][i - 1], DP[0][i - 2]) + arr[1][i];
		}

		printf("%d\n", max(DP[0][n], DP[1][n]));
	}

	return 0;
}
