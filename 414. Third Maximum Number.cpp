#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int thirdMax(vector<int>& nums) {
		
		sort(nums.begin(), nums.end());

		int order_cnt = 0;
		int i;
		for( i = nums.size() -1; i > 0; i--)
		{
			if( nums[i] != nums[i-1])
				order_cnt++;
			if (order_cnt == 2)
				break;
		}

		if (order_cnt == 2)
			return nums[i-1];
		else
			return nums[nums.size() - 1];
	}
};

int main()
{
	Solution sol;
	vector<int> vec = { 2, 2, 3, 1 };
	cout << sol.thirdMax(vec)<< endl;
	
	system("pause");
	return 0;
}







