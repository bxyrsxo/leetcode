#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	int arrayPairSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		
		int sum = 0;
		for (int i = 0; i < nums.size(); i += 2)
			sum += nums[i];
		return sum;
	}
};

int main()
{
	Solution sol;
	
	vector<int> vec = { 1,4,3,2 };
	cout << sol.arrayPairSum(vec)<< endl;

	system("pause");
	return 0;
}







