#include <iostream>
#include <cstdlib>


using namespace std;

class Solution {
public:
	int findComplement(int num) {
		int msb = 0;
		int i;

		for (i = 31; i >= 0; i--)
			if (num & 1 << i)
			{
				msb = i;
				break;
			}
		
		int mask = 0;
		for (i = 0; i < msb; i++)
			mask |= 1 << i;

		int comp = num ^ 0xffffffff;
		comp &= mask;
		return comp;
	}
};

int main()
{
	Solution sol;
	cout << sol.findComplement(0xff00) << endl;;
	
	system("pause");

	return 0;
}







