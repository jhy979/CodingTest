#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int buffer[1001][1001];
long long dp[1001][1001];
int number;
int N;

void DFS(int x, int y) {
    int temp = buffer[x][y];
    if (x == N - 1 && y == N - 1) return;
    if (x + temp < N) {
        dp[x + temp][y] += dp[x][y];
    }
    if (y + temp < N) {
        dp[x][y + temp] += dp[x][y];
    }
}

int main() {
    cin >> N;
    number = 0;
    for (int y = 0; y < N; y++) {
        for (int x = 0; x < N; x++) {
            cin >> buffer[x][y];
        }
    }
    for (int y = 0; y < N; y++) {
        for (int x = 0; x < N; x++) {
            dp[x][y] = 0;
        }
    }

    dp[0][0] = 1;
    for (int y = 0; y < N; y++) {
        for (int x = 0; x < N; x++) {
            DFS(x, y);
        }
    }
    
    cout << dp[N - 1][N - 1] << endl;
    return 0;
}
