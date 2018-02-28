#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Solution {
public:
	int findNthDigit(int n) {

		int64_t cnt = 0;
		int digits = 1;
		int64_t q = 10;
		for(int64_t i = 1; ;i++)
		{
			if (i == q)
			{
				digits++;
				q *= 10;
			}
			cnt += digits;
			
			if (cnt >= n)
			{
				int r = 0;
				int order = cnt - n;
				int t = 1;
				for (int j = 0; j <= order; j++)
				{
					unsigned int num = i / t;
					r = num % 10;
					t *= 10;
				}
				return r;
			}
		}
		
	}
};

int main()
{
	Solution sol;
	
	cout << sol.findNthDigit(2147483647) << endl;
	
	system("pause");
	return 0;
}







