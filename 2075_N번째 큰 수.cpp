//2075_N번째 큰 수
#include <cstdio>
#include <queue>
using namespace std;

int main() {
	int n, tmp;
	priority_queue<int, vector<int>, greater<int> > pq;	//오름차순

	scanf("%d", &n);

	for (int i = 0; i < n*n; ++i) {
		scanf("%d", &tmp);

		if (pq.size() < n) {			
			pq.push(tmp);
		}

		else if (pq.size() == n) {		//n개만큼의 data만 받음
			if (pq.top() < tmp) {
				pq.pop();
				pq.push(tmp);
			}
		}
	}

	printf("%d\n", pq.top());			//top에는 n번째 큰 수가 있음

	return 0;
}
