#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	string convertToBase7(int num) {
		
		int minus_num = false;
		if (num < 0)
		{
			num *= -1;
			minus_num = true;
		}

		int remainder = num;
		int quotient = num;
		vector<int> vec;

		while (quotient >= 7)
		{
			remainder = quotient % 7;
			quotient /= 7;
			vec.push_back(remainder);
		}
		vec.push_back(quotient);

		if (minus_num)
			vec.push_back('-');

		reverse(vec.begin(), vec.end());

		string s;
		for (int i = 0; i < vec.size(); i++)
		{ 
			if(vec[i] != '-')
				s.push_back(static_cast<char>(vec[i]) + '0');
			else
				s.push_back(vec[i]);
		}
		return s;

	}
};

int main()
{
	Solution sol;
	

	cout << sol.convertToBase7(-200) << endl;

	system("pause");
	return 0;
}







