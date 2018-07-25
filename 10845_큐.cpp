//10845_큐
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	queue<int> q;
	int n;
	int data;
	string str;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> str;

		if (str == "push") {		//data push
			cin >> data;
			q.push(data);
		}

		else if (str == "pop") {			//empty check 후 비어 있으면 -1,
			if (q.empty()) cout << "-1\n";	//data가 있으면 front 출력 후, pop
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}

		else if (str == "size") {			//queue size 출력
			cout << q.size() << "\n";
		}

		else if (str == "empty") {			//queue의 empty 여부 출력
			cout << q.empty() << "\n";		//empty면 1, data가 있으면 0
		}

		else if (str == "front") {			//empty 체크 후 비어 있으면 -1,
			if (q.empty()) cout << "-1\n";	//data가 있으면 front 출력, pop X
			else cout << q.front() << "\n";
		}

		else if (str == "back") {			//empty 체크 후 비어 있으면 -1,
			if (q.empty()) cout << "-1\n";	//data가 있으면 back 출력, pop X
			else cout << q.back() << "\n";
		}
	}

	return 0;
}
