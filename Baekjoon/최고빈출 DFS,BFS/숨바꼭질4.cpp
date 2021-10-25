#include <iostream>
#include <queue>
#include <algorithm>
#include <stack>
using namespace std;

#define MAX 100000
int n, k;
bool visited[MAX+1];
int parent[MAX+1];

int main() {
	cin >> n >> k;
	stack<int> s;
	queue <pair<int, int>> q;
	q.push({ n,0 });
	fill(visited, visited + MAX, false);
	parent[n] = -1;
	while (!q.empty()) {
		int cur = q.front().first;
		int cnt = q.front().second;
		visited[cur] = true;
		q.pop();

		if (cur == k) {
			cout << cnt << endl;
			for (int i = k; parent[i] != -1; i = parent[i]) {
				s.push(parent[i]);
			}
			while (!s.empty()) {
				printf("%d ",s.top());
				s.pop();
			}
			cout << k;
			break;
		}

		if (cur*2 <= MAX && !visited[cur*2]) {
			q.push({ cur*2,cnt+1 });
			visited[cur*2] = true;
			parent[cur * 2] = cur;
		}

		if (cur + 1 <= MAX && !visited[cur + 1]) {
			q.push({ cur+1,cnt + 1 });
			visited[cur + 1] = true;
			parent[cur + 1] = cur;
		}

		if (cur - 1 >=0 && !visited[cur -1]) {
			q.push({ cur-1,cnt + 1 });
			visited[cur - 1] = true;
			parent[cur - 1] = cur;
		}

	}

	return 0;
}
