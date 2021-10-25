#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#define MAX 100000
using namespace std;
int n, k;
bool visited[MAX + 1];
map <int, int> m;
void bfs() {
	queue <pair<int, int>> q;
	q.push({n,0});
	visited[n] = true;
	while (!q.empty()) {
		int cur = q.front().first;
		int cnt = q.front().second;
		visited[cur] = true;
		q.pop();
		if (cur == k) {	
			m[cnt]++;
		}
		if (cur * 2 <= MAX && !visited[cur * 2]) {
			q.push({cur*2,cnt+1});
		}
		if (cur + 1 <= MAX && !visited[cur + 1]) {
			q.push({ cur + 1,cnt + 1 });
		}
		if (cur - 1 >=0 && !visited[cur - 1]) {
			q.push({ cur - 1,cnt + 1 });
		}
	}
}
int main() {
	cin >> n >> k;
	bfs();
	fill(visited, visited + MAX + 1, false);
	for (auto itr : m) {
		cout << itr.first << " " << itr.second << endl;
		return 0;
	}
	return 0;
}
