//1904_01타일
#include <cstdio>

int DP[1000001] = { 0, 1, 2, 3, 5};

int main() {
	int n;
	
	scanf("%d", &n);

	for (int i = 5; i <= n; ++i) {
		DP[i] = (DP[i - 1] + DP[i - 2]) % 15746;
	}

	printf("%d\n", DP[n]);

	return 0;
}
