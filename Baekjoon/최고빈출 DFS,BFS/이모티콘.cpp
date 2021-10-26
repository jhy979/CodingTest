#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define MAX 1100
using namespace std;
int s;
bool visited[MAX];
int main() {
	cin >> s;
	fill(visited, visited + MAX, false);
	queue <pair<int, pair<int, int>>> q;
	q.push({ 1, { 0,0 }});
	int board = 1;

	while (!q.empty()) {
		int cur = q.front().first;
		int time = q.front().second.first;
		int board = q.front().second.second;
		visited[cur] = true;
		q.pop();
		// 종료
		if (cur == s) {
			cout << time;
			return 0;
		}

		// 복사 
		if (cur != board) {
			q.push({ cur,{time + 1,cur} });
		}
		
		// 붙여넣기
		if (cur + board < MAX) {
			q.push({ cur + board, { time + 1,board } });
			visited[cur + board] = true;
		}
		
		// 빼기
		if (cur - 1 >0 && !visited[cur - 1]) {
			q.push({ cur - 1, {time + 1,board}});
			visited[cur - 1] = true;
		}
	}
	return 0;
}
