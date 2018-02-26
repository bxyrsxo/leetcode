#include <iostream>
#include <cstdlib>
using namespace std;

class Solution {
public:
	int hammingWeight(uint32_t n) {
		int cnt = 0;
		int i;
		for (i = 0; i < 32; i++)
			if (n & 1 << i)
				cnt++;
		return cnt;
	}
};

int main()
{
	Solution sol;
	cout << sol.hammingWeight(0xff) << endl;
	
	system("pause");

	return 0;
}







