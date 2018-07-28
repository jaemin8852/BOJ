//4504_배수 찾기
#include <cstdio>

int main() {
	int n, tmp;

	scanf("%d", &n);
	while (scanf("%d", &tmp) && tmp) printf("%d is%s a multiple of %d.\n", tmp, tmp%n == 0 ? "":" NOT", n);

	return 0; 
}
