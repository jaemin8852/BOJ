//1350_진짜 공간
#include <cstdio>

int file[1001];

int main() {
	int n,size;
	long long ans = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &file[i]);
	}
	scanf("%d", &size);

	for (auto it : file) {
		ans += it / size;
		ans += it % size != 0;
	}

	printf("%lld\n", ans * size);

	return 0;
}
