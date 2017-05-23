/**
*	codeground_practice : subarray
*	use vector, sort and sum
*	@author	peter9378
*	@date		2017.05.23
*/
#include <cstdio>
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char** argv)
{
	setbuf(stdout, NULL);

	int T;
	int test_case;

	scanf("%d", &T);
	for (test_case = 1; test_case <= T; test_case++) 
	{
		vector<int> arr;
		arr.clear();
		int N, S;
		scanf("%d %d", &N, &S);
		for (int i = 0; i < N; i++)
		{
			int temp;
			scanf("%d", &temp);
			arr.push_back(temp);
		}

		int count = 0;
		int sum = 0;
		vector<int> ans;
		for (int i = 0; i < N; i++)
		{
			sum = arr.at(i) + sum;
			count++;


			while (sum >= S)
			{
				ans.push_back(count);
				sum = sum - arr.at(i + 1 - count);
				count--;
			}
		}
		if (count == N)
			ans.push_back(0);
		sort(ans.begin(), ans.end());

		// print answer
		printf("#testcase%d\n", test_case);
		cout << ans.at(0) << endl;
	}

	return 0;
}