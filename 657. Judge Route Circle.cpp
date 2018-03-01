#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	bool judgeCircle(string moves) {
		int u_cnt = 0;
		int d_cnt = 0;
		int l_cnt = 0;
		int r_cnt = 0;

		for (int i = 0; i < moves.size(); i++)
		{
			if (moves[i] == 'U')
				u_cnt++;
			if (moves[i] == 'D')
				d_cnt++;
			if (moves[i] == 'L')
				l_cnt++;
			if (moves[i] == 'R')
				r_cnt++;		
		}

		if (l_cnt == r_cnt && u_cnt == d_cnt)
			return true;
		else
			return false;
	}
};

int main()
{
	Solution sol;
	
	string str("UD");
	cout << sol.judgeCircle(str)<< endl;

	system("pause");
	return 0;
}







