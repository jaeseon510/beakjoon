#include<iostream>
#include<vector>
using namespace std;
const long long int mod = 1e9 + 9;
long long int dp[100001][4];
int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= 100000; i++) {
		if (i - 1 >= 0) {
			dp[i][1] = dp[i - 1][2] + dp[i - 1][3];
			if (i == 1) {
				dp[i][1] = 1;
			}
		}
		if (i - 2 >= 0) {
			dp[i][2] = dp[i - 2][1] + dp[i - 2][3];
			if (i == 2) {
				dp[i][2] = 1;
			}
		}
		if (i - 3 >= 0) {
			dp[i][3] = dp[i - 3][1] + dp[i - 3][2];
			if (i == 3) {
				dp[i][3] = 1;
			}
		}
		dp[i][1] %= mod;
		dp[i][2] %= mod;
		dp[i][3] %= mod;
	}
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		cout << (dp[n][1] + dp[n][2] + dp[n][3]) % mod << '\n';
	}
}
