//9012_괄호
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int T;
	string str;

	cin >> T;

	while (T--) {
		stack<int> stk;
		bool wrong = false;
		cin >> str;

		for (auto c : str) {
			if (c == '(') {
				stk.push(1);
			}

			else if (c == ')') {
				if (stk.empty()) {
					wrong = true;	//여는 괄호 수 < 닫는 괄호 수
					break;
				}
				else {
					stk.pop();
				}
			}
		}

		if (stk.empty() && !wrong) cout << "YES\n";	//empty X -> 여는 괄호 수 > 닫는 괄호 수
		else cout << "NO\n";
	}

	return 0;
}
