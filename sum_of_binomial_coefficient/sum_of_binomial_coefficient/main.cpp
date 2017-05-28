/**
*	codeground_practice : sum of binomial coefficient
*	use fermat's little theorem
*	@author	peter9378
*	@date		2017.05.23
*/
#include <iostream>

using namespace std;

int main()
{
	int T, test_case;
	
		long long ans, N, M, P = 1000000007LL;
		long long temp1 = 1, temp2 = 1, temp3 = 1;
		long long p = P - 2;
	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{
		cin >> N >> M;
		for (long long i = 1; i <= N; i++)
		{
			temp1 *= i;
			temp1 %= P;
		}
		for (long long i = 1; i <= M; i++)
		{
			temp2 *= i;
			temp2 %= P;
		}
		for (long long i = 1; i <= N - M; i++)
		{
			temp2 *= i;
			temp2 %= P;
		}
		while (p > 0)
		{
			if (p % 2 != 0)
			{
				temp3 *= temp2;
				temp3 %= P;
			}
			temp2 *= temp2;
			temp2 %= P;
			p /= 2;
		}
		temp3 %= P;
		ans = temp1*temp3;
		ans %= P;

		// print answer
		cout << "Case #" << test_case + 1 << endl;
		cout << ans << endl;
	}

	return 0;
}