//10828_스택
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	stack<int> stk;
	int n;
	int data;
	string str;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> str;

		if (str == "push") {		//data 받고 push
			cin >> data;
			stk.push(data);
		}

		else if (str == "pop") {				//empty check하고 비어 있으면 -1,
			if (stk.empty()) cout << "-1\n";	//값이 있으면 top 값 출력 후, pop
			else {
				cout << stk.top() << "\n";
				stk.pop();
			}
		}

		else if (str == "size") {			//stack size 출력
			cout << stk.size() << "\n";
		}

		else if (str == "empty") {			//stack empty 출력 (비어 있으면 1, 아니면 0)
			cout << stk.empty() << "\n";
		}

		else if (str == "top") {			//empty check하고 비어 있으면 -1,
			if (stk.empty()) cout << "-1\n";	//값이 있으면 top 값 출력, pop은 X
			else {
				cout << stk.top() << "\n";
			}
		}
	}

	return 0;
}
