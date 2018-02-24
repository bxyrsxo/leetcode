#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {

		sort(nums.begin(), nums.end());
		int i, j, tmp;
		int len = nums.size();
		for (i = 0, j = 0; i < len; i++)
		{
			if (!j)
			{
				tmp = nums[i];
				j = 1;
			}
			else
			{
				if (tmp == nums[i])
					j = 0;
				else
					break;
			}
		}
		return tmp;

	}
};

int main()
{
	Solution sol;

	vector<int> vec = { 1,1,2,2,3,3,4,5,5,6,6,7,7 };

	cout << sol.singleNumber(vec) << endl;;

	system("pause");
	return 0;
}