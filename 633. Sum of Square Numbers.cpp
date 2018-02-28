#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class Solution {
public:
	bool judgeSquareSum(int c) {
		double half_c = sqrt(static_cast<double>(c));

		for (int i = 0; i <= half_c; i++)
		{
			double squ = c - i*i;
			int   root = sqrt(squ);

			if ((root*root - squ) == 0)
				return true;
		}
		return false;
	}
};

int main()
{
	Solution sol;
	

	cout << sol.judgeSquareSum(3) << endl;;
	
	system("pause");
	return 0;
}







