/**
*	codeground_practice : 시험공부
*	use vector, sort and sum
*	@author	peter9378
*	@date		2017.05.23
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b)	// to compare by desc order
{
	return a > b;
}

int main(int argc, char** argv)
{
	int T, test_case;

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{
		int ans = 0, N, K;
		cin >> N >> K;
		vector<int> arr;

		for (int i = 0; i < N; i++)	// add to vector all elements
		{
			int temp;
			cin >> temp;
			arr.push_back(temp);
		}
		sort(arr.begin(), arr.end(), compare);	// desc order sort
		
		for (int i = 0; i < K; i++)	// add high scores
			ans += arr[i];
		// print answer
		cout << "Case #" << test_case + 1 << endl;
		cout << ans << endl;
	}

	return 0;
}