/**
*	codeground_practice : 수강신청
*	use dp
*	@author	peter9378
*	@date		2017.05.29
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T, test_case;
	cin >> T;
	for (test_case = 1; test_case <= T; test_case++)
	{
		int n, m;
		cin >> n >> m;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		vector<int> dp(m + 1, 0);
		for (int i = 0; i < n; i++)
		{
			for (int j = m - arr[i]; j >= 0; j--)
				dp[j + arr[i]] = max(dp[j + arr[i]], dp[j] + arr[i]);
		}
		cout << "Case #" << test_case << endl << dp[m] << endl;
	}
	return 0;
}
