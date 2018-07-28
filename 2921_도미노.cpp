//2921_도미노
#include <cstdio>

int main() {
	int n, ans = 0;

	scanf("%d", &n);

	for (int i = 0; i <= n; ++i) {
		for (int j = 0; j <= n; ++j) {
			ans += i;
			ans += j;
		}
	}

	printf("%d\n", ans/2+(n*(n+1)/2));

	return 0;
}
