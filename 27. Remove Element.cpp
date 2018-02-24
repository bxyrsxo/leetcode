#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int i;
		int len = nums.size();
		for (i = 0; i < len; i++)
		{
			if (nums[i] == val)
			{ 
				nums.erase(nums.begin() + i--);
				len--;
			}
		}
		return nums.size();
	}
};

int main()
{
	Solution sol;
	vector<int> vec = {1};

	cout << sol.removeElement(vec, 1) << endl;

	system("pause");
	return 0;
}