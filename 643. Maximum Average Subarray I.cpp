#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	double findMaxAverage(vector<int>& nums, int k) {
	
		int i, j;
		int n = nums.size();
		int average;
		double max_avg;
		for (i = 0; i <= n - k; i++)
		{
			average = 0;
			for( j = 0; j < k; j++)
				average += nums[i+j];
			if (!i)
				max_avg = average;
			else
				if (average > max_avg)
					max_avg = average;
		}
		max_avg /= static_cast<double> (k);

		return max_avg;
	}
};

int main()
{
	Solution sol;

	vector<int> vec;
	vec.push_back(1);
	vec.push_back(12);
	vec.push_back(-5);
	vec.push_back(-6);
	vec.push_back(50);
	vec.push_back(3);

	cout << sol.findMaxAverage(vec, 4) << endl;;
	
	system("pause");

	return 0;
}







