#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int coin_change(vector<int>& coins, int target) {
    vector<int> dp(target + 1, INT_MAX);
    dp[0] = 0;
    
    for (int coin : coins) {
        for (int i = coin; i <= target; ++i) {
            if (dp[i - coin] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    
    return (dp[target] == INT_MAX) ? -1 : dp[target];
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }
    cout << coin_change(coins, x) << endl;
    return 0;
}