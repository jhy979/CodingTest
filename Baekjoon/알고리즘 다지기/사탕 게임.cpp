#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int Max = -1e9;
using namespace std;
int n;
char arr[51][51];

void checkRow() {
	for (int i = 0; i < n; i++) {
		int cnt = 1;
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == arr[i][j + 1]) {
				cnt++;
			}
			else {
				Max = max(Max, cnt);
				cnt = 1;
			}
		}
	}
}

void checkCol() {
	for (int i = 0; i < n; i++) {
		int cnt = 1;
		for (int j = 0; j < n; j++) {
			if (arr[j][i] == arr[j + 1][i]) {
				cnt++;
			}
			else {
				Max = max(Max, cnt);
				cnt = 1;
			}
		}
	}
}
int main() {
	cin >> n;
	getchar();
	string s;
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		for (int j = 0; j < s.size(); j++) {
			arr[i][j] = s[j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			//가로 교환 
			swap(arr[i][j], arr[i][j + 1]);
			checkCol();
			checkRow();
			swap(arr[i][j], arr[i][j + 1]);

			//세로 교환 
			swap(arr[j][i], arr[j + 1][i]);
			checkCol();
			checkRow();
			swap(arr[j][i], arr[j + 1][i]);
		}
	}

	cout << Max;
	return 0;
}
