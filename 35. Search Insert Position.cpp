#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int i;
		int len = nums.size();

		for (i = 0; i < len; i++)
			if (target <= nums[i])
				break;
		
		return i;
	}
};

int main()
{
	Solution sol;
	vector<int> vec = { 1,3,5,6 };

	cout << sol.searchInsert(vec, 7) << endl;;

	system("pause");
	return 0;
}