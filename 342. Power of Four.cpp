#include <iostream>
#include <cstdlib>

using namespace std;

class Solution {
public:
	bool isPowerOfFour(int num) {
		if (num < 0)
			return false;
		int i;
		for (i = 0; i < 32; i += 2)
			if (num == 1 << i)
				return true;
		return false;
	}
};

int main()
{
	Solution sol;
	cout << sol.isPowerOfFour(16*16) << endl;
	
	system("pause");

	return 0;
}







