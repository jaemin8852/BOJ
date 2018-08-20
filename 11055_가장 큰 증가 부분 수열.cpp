//11055_가장 큰 증가 부분 수열
#include <cstdio>
#include <algorithm>
using namespace std;

int DP[1001], arr[1001], n, res;

int main() {
	scanf("%d", &n);

	for (int i = 1; i <= n; ++i) scanf("%d", &arr[i]);

	for (int i = 1; i <= n; ++i) {
		int val = 0;
		for (int j = 1; j <= i; ++j) {
			if (arr[i] > arr[j])
				val = max(val, DP[j]);
		}
		DP[i] = val + arr[i];
		res = max(res, DP[i]);
	}

	printf("%d\n", res);
	
	return 0;
}
