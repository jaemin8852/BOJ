//10799_쇠막대기
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	string str;
	stack<int> stk;
	int result = 0;
	char before;

	cin >> str;

	for (auto c : str) {
		if (c == '(')
			stk.push(1);

		else {
			stk.pop();

			if (before == '(') result += stk.size();	//레이저일 때, stack의 size만큼 더해줌
			else result++;							             	//쇠막대기의 오른쪽 끝일 때, 1을 더해줌
		}

		before = c;
	}

	cout << result << "\n";

	return 0;
}
