#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int n;
int dp[10][10];

bool narim(int a,int i) {
	int f;
	int b;
	int temp = i;
	while (a /100 > 0) {
		f = a / pow(10,temp - 1);
		b = a / pow(10, temp - 2);
		b = b % 10;
		int k = pow(10, temp - 1);
		if (f <= b)
			return false;
		else {
			a = a % k;
			temp--;
		}
	}
	f = a / 10;
	b = a % 10;
	if (f > b)
		return true;
	else
		return false;
}

long long check(int i, int j,int cnt) {
	long long s = pow(10, i - 1) * j;
	long long e = pow(10, i-1) * (j+1);
	
	for (long long x = s; x < e; x++) {
		if (narim(x, i)) {
			if (++cnt == n) {
				return x;
			}
		}
	}

}

int main() {
	cin >> n;
	if (n <= 10) {
		cout << n;
		return 0;
	}
	else if (n > 1002) {
		cout << -1;
		return 0;
	}
	fill(&dp[0][0], &dp[9][9], 0);
	for (int i = 0; i < 10; i++) {
		dp[0][i] = 0;
		dp[1][i] = 1;
	}
	for (int i = 2; i < 10; i++) {
		for (int j = i-1; j < 10; j++) {
			for (int c = 0; c <= j - 1; c++) {
				dp[i][j] += dp[i - 1][c];
			}
		}
	}

	int num = 9;
	bool loop_flag = false;
	for (int i = 2; i < 10; i++) {
		if (loop_flag)
			break;
		for (int j = 0; j < 10; j++) {
			num += dp[i][j];
			if (num >= n) {
				cout << check(i, j, num - dp[i][j]);
				loop_flag = true;
				break;
			}
			
		}
	}
	return 0;
}
