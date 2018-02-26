#include <iostream>
#include <cstdlib>
using namespace std;

class Solution {
public:
	bool isPowerOfTwo(int n) {
		if (n < 0)
			return false;
		int i;
		int cnt = 0;
		for (i = 0; i < 32; i++)
			if (n & 1 << i)
				cnt++;
		if (cnt == 1)
			return true;
		else
			return false;
	}
};

int main()
{
	Solution sol;
	cout << sol.isPowerOfTwo(1024) << endl;
	
	system("pause");

	return 0;
}







