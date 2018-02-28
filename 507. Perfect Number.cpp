#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Solution {
public:
	bool checkPerfectNumber(int num) {
		vector<int> vec;
		if (num == 1 || num == 0)
			return false;
		for (int i = 1; i <= num / i; i++)
			if (num % i == 0)
			{
				vec.push_back(i);
				vec.push_back(num/i);
			}

		int sum = 0;
		for (int i = 0; i < vec.size(); i++)
			sum += vec[i];

		if (sum == 2*num)
			return true;
		else
			return false;

	}
};

int main()
{
	Solution sol;
	
	cout << sol.checkPerfectNumber(1) << endl;
	
	system("pause");
	return 0;
}







