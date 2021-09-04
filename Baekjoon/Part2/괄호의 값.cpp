#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string s;
	stack <int> st;
	cin >> s;
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum = 0;
		if (s[i] == ')') {
			if (st.top() == -1) {
				
				st.pop();
				st.push(2);
			}
			else if (st.top() >= 0) {
				int temp = st.top() * 2;
				st.pop();
				st.pop();
				st.push(temp);
			}
		}
		else if (s[i] == ']') {
			if (st.top() == -2) {
				st.pop();
				st.push(3);
			}
			else if (st.top() >= 0) {
				int temp = st.top() * 3;
				st.pop();
				st.pop();
				st.push(temp);
			}
		}
		else if (s[i] == '(') {
			st.push(-1);
		}
		else if (s[i] == '[') {
			st.push(-2);
		}

		if (!st.empty() && st.top() < 0) {
			sum = st.top();
			st.pop();
		}
		else {
			while (!st.empty() && st.top() >= 0) {
				sum += st.top();
				st.pop();
			}
		}
		st.push(sum);
	}

	if (st.size() > 1) {
		cout << 0;
	}
	else {
		cout << st.top();
	}

	return 0;
}
