#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int n, m;
int MAX =  1e9;
int arr[51][51];
int dx[8] = { 1,-1,1,-1,0,0,-1,1 };
int dy[8] = { 1,-1,0,0,1,-1,1,-1 };

int main() {
	cin >> n >> m;
	int answer = -1e9;
	queue < pair<int, int>> q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j]) {
				q.push({ i,j });
			}
		}
	}

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();	
		for (int k = 0; k < 8; k++) {
			int  newX = x + dx[k];
			int  newY = y + dy[k];
			if (newX < 0 || newX >= n || newY < 0 || newY >= m)
				continue;
			if (!arr[newX][newY]) {
				q.push({ newX,newY });
				arr[newX][newY] = arr[x][y] + 1;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (answer < arr[i][j]) 
				answer = arr[i][j];
		}
	}
	printf("%d\n", answer - 1);

	return 0;
}
