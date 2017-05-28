/**
*	codeground_practice : 3N+1
*	equation, kind of back_tracking
*	@author	peter9378
*	@date		2017.05.28
*/
#include <iostream>
#include <algorithm>

using namespace std;

unsigned long long func(unsigned long long N, int K, bool flag)
{
	if (K == 0)
		return N;
	unsigned long long result = func(2 * N, K - 1, flag);

	if (((N - 1) >= 6) && ((N - 1) % 3 == 0) && (((N - 1) / 3) % 2 == 1))
	{
		if (flag)
			result = max(result, func((N - 1) / 3, K - 1, flag));
		else
			result = min(result, func((N - 1) / 3, K - 1, flag));
	}
	return result;
}

int main(int argc, char** argv)
{
	std::ios::sync_with_stdio(false);
	setbuf(stdout, NULL);
	int T, test_case;

	cin >> T;
	for (test_case = 1; test_case <= T; test_case++)
	{
		int k;
		cin >> k;
		cout << "Case #" << test_case  << endl;
		cout << func(1, k, 0) << " " << func(1, k, 1) << endl;
	}

	return 0;
}