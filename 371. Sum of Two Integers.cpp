#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

	class Solution {
	public:
		int getSum(int a, int b) {
		
			int d = false;
			int c = 0;
			for (int i = 0; i < 32; i++)
			{
				unsigned int bit1, bit2;
				unsigned bb = 1 << i;
				bit1 = (a & bb) >> i;
				bit2 = (b & bb) >> i;
			
				if ((bit1 + bit2) == 1)
				{
					if (!d)
						c |= bb;
					else
						d = true;
				}
				else if (bit1 == 0 && bit2 == 0)
				{
					if (d)
					{
						c |= bb;
						d = false;
					}
				}
				else
				{
					if (!d)
						d = true;
					else
						c |= bb;
				}
			}

 			return c;
		}
	};

int main()
{
	Solution sol;

	cout << sol.getSum(1, 2) << endl;;

	system("pause");
	return 0;
}
