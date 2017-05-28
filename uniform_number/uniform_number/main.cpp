/**
*	codeground_practice : uniform_number
*	equation
*	@author	peter9378
*	@date		2017.05.28
*/
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
	setbuf(stdout, NULL);
	int T, test_case, N, rN, i, b;
	unsigned long long sum, j;
	cin >> T;
	for (test_case = 1; test_case <= T; test_case++)
	{
		cin >> N;
		if (N < 4)
		{
			cout << "Case #" << test_case << endl << 2 << endl;
			continue;
		}
		rN = (int)sqrt(N);
		b = N + 1;

		for (i = rN; i >= 1; i--)
		{
			if (N%i == 0 && i<N / i - 1 && b>N / i - 1)
			{
				b = N / i - 1;
				break;
			}
		}

		for (i = 2; i < b && i <= rN; i++)
		{
			sum = 1;
			j = i;
			while (sum < N)
			{
				sum += j;
				j *= i;
				if (N%sum == 0 && (N / sum) < i)
				{
					b = i;
					break;
				}
			}
		}
		cout << "Case #" << test_case << endl << b << endl;
	}
	return 0;
}