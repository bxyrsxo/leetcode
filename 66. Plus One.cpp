#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		vector<int> vec;
		int flag = 1;
		int len = digits.size();
				
		for( int i = len-1; i >= 0; i--)
		{
			if(!flag)
				vec.push_back(digits[i]);
			else
			{
				if (digits[i] == 9)
				{
					vec.push_back(0);
					flag = 1;
				}
				else
				{
					vec.push_back(digits[i] + 1);
					flag = 0;
				}
			}
		}
		reverse(vec.begin(), vec.end());

		if (flag)
			vec.insert(vec.begin(), 1);
		return vec;
	}
};

int main()
{
	Solution sol;
	vector<int> vec = { 9, 9, 9 };
	
	vector<int> ret = sol.plusOne(vec);
	
	for (int i = 0; i < ret.size(); i++)
		cout << ret[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}







