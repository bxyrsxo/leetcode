#include <iostream>
#include <cstdlib>


using namespace std;

class Solution {
public:
	int hammingDistance(int x, int y) {
		int z = x^y;
		int i, cnt = 0;;
		for (i = 0; i < 31; i++)
			if (z & 1 << i)
				cnt++;
		return cnt;
	}
};

int main()
{
	Solution sol;
	cout << sol.hammingDistance(1,4) << endl;;
	
	system("pause");

	return 0;
}







