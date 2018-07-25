//1764_듣보잡
#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

map<string, int> mp;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n, m;
	string s;
	vector<string> V;

	cin >> n >> m;

	while (n--) {	//듣도 못한 사람
		cin >> s;
		mp[s]++;
	}

	while (m--) {	//보도 못한 사람
		cin >> s;
		mp[s]++;
	}

	for (auto it : mp) {
		if (it.second == 2) {		//듣보잡이면
			V.push_back(it.first);	//듣보잡의 이름을 vector에 push_back
		}
	}

	sort(V.begin(), V.end());		//오름차순 정렬
	
	cout << V.size() << "\n";		//출력
	for (auto it : V) {
		cout << it << "\n";
	}

	return 0;
}
