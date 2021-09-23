#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {

    int n, cost;

    cin >> n >> cost;
    
    vector<int> v(n);
    vector<int> dp(cost + 1);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    dp[0] = 1;
    for (int i = 0; i < v.size(); i++) {
        for (int j = v[i]; j <=cost; j++) {
            dp[j] = dp[j] + dp[j - v[i]];
        }
    }
    cout << dp[cost] << endl;
    return 0;
}
