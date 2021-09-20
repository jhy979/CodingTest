#include <iostream>
#include <vector>
#include <queue>
#define MAX 32001
using namespace std;
int n, m;
vector <int> arr[MAX];
queue <int> q;
int inDegree[MAX];
int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int s, t;
		cin >> s >> t;
		arr[s].push_back(t);
		inDegree[t]++;
	}
	for (int i = 1; i <= n; i++) {
		if (inDegree[i] == 0)
			q.push(i);
	}

	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		cout << cur << " ";
		for (int i = 0; i < arr[cur].size(); i++) {
			inDegree[arr[cur][i]]--;
			if (inDegree[arr[cur][i]] == 0) {
				q.push(arr[cur][i]);
			}
		}
	}

	return 0;
}
