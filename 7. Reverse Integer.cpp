#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
using namespace std;

class Solution {
public:
	long long reverse(int x) {
		int sign = 0;
		if (x < 0)
		{
			sign = 1;
			x *= -1;
		}

		stringstream ss;
		ss << x;

		string str;
		if (sign)
			str.push_back('-');

		int i;
		int len = ss.str().size();
			
		for (i = len - 1; i >= 0; i--)
			str.push_back(ss.str()[i]);
		
		long long r = 0;
		long long m = 1;
		if (!sign)
		{
			for (i = len - 1; i >= 0; i--)
			{
				r += static_cast<long long>(str[i]-'0') * m;
				m *= 10LL;
			}
		}
		else
		{
			for (i = len; i > 0; i--)
			{
				r += (str[i]-'0') * m;
				m *= 10LL;
			}
			r *= -1;
		}
		
		return r;
	}
};

int main()
{
	Solution sol;

	cout << sol.reverse(1534236469) << endl;

	system("pause");
	return 0;
}
