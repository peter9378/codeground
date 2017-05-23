/**
*	codeground_practice : 숫자 골라내기
*	use vector, sort and sum
*	@author	peter9378
*	@date		2017.05.23
*/
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int T, test_case;

	cin >> T;
	if (T > 20)
		return -1;
	for (test_case = 0; test_case < T; test_case++)
	{
		int temp;
		int ans = 0;
		unsigned int N;
		cin >> N;
		// without using array or list
		
		for (int i = 0; i < N; i++)
		{
			cin >> temp;
			ans ^= temp;
		}
		// print answer
		cout << "Case #" << test_case + 1 << endl;
		cout << ans << endl;
	}

	return 0;
}