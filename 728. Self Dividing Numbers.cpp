#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> selfDividingNumbers(int left, int right) {
		
		vector<int> vec;
		for (int n = left; n <= right; n++)
		{
			int digits = 0;
			int num = n;
			vector<int> digit_vec;
			for (int t = 1;;)
			{
				if (num / t == 0)
					break;
				else
				{
					t *= 10;
					digits++;
				}
			}

			for (int i = 0; i < digits; i++)
			{
				digit_vec.push_back(num % 10);
				num /= 10;
			}
		
			int flag = true;
			int x;
			for (int j = 0; j < digit_vec.size(); j++)
			{
				x = digit_vec[j];
				if (!x)
					break;
				if (n % x)
				{
					flag = 0;
					break;
				}
			}

			if (!x)
				continue;
			
			if (flag)
				vec.push_back(n);
		}

		return vec;
	}
};

int main()
{
	Solution sol;
	vector<int> vec = sol.selfDividingNumbers(3,22);
	
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << endl;

	system("pause");

	return 0;
}







