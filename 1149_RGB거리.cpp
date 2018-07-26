//1149_RGB거리
#include <cstdio>
#include <algorithm>
using namespace std;

int DP[1001][3]; //0 R, 1 G, 2 B
				//n번째 집을 m 색깔로 칠했을 때의 min cost
int cost[1001][3];

int main() {
	int n;

	scanf("%d", &n);
	
	for (int i = 1; i <= n; ++i) scanf("%d %d %d", &cost[i][0], &cost[i][1], &cost[i][2]);
	
	for (int i = 1; i <= n; ++i) {
		DP[i][0] = min(DP[i - 1][1], DP[i - 1][2]) + cost[i][0];
		DP[i][1] = min(DP[i - 1][0], DP[i - 1][2]) + cost[i][1];
		DP[i][2] = min(DP[i - 1][0], DP[i - 1][1]) + cost[i][2];
	}

	printf("%d\n", min(min(DP[n][0], DP[n][1]), DP[n][2]));
	
	return 0;
}
