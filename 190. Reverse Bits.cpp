#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Solution {
public:
	uint32_t reverseBits(uint32_t n) {
		uint32_t outp = 0;
		for (int i = 0; i < 16; i++)
			outp |= ((n & 1 << i) << (31 - 2 * i));
		for (int i = 16; i < 32; i++)
			outp |= ((n & 1 << i) >> (2*i - 31));
		return outp;
	}
};

int main()
{
	Solution sol;
	
	cout << sol.reverseBits(0b00000010100101000001111010011100) << endl;
	
	system("pause");
	return 0;
}







