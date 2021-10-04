#include <iostream>
#include <algorithm>

using namespace std;
int mResult = 1e9;
long long n, m;
void dfs(long long a,int sum) {
	if (a == m) {
		mResult = min(mResult, sum+1);
		return;
	}
	if (a > m) {
		return;
	}
	dfs(a * 10 + 1, sum + 1);
	dfs(a * 2, sum + 1);
}
int main() {
	cin >> n >> m;
	dfs(n,0);

	if (mResult == 1e9)
		cout << -1;
	else
		cout << mResult;
	return 0;
}
