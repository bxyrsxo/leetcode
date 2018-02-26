#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int i, j;
		int len_J = J.size();
		int len_S = S.size();

		int cnt = 0;
		for (i = 0; i < len_J; i++)
			for (j = 0; j < len_S; j++)
				if (J[i] == S[j])
					cnt++;
		return cnt;
	}
};

int main()
{
	Solution sol;
	cout << sol.numJewelsInStones(string("aA"), string("aaaaAAAAASSSSS")) << endl;;
	
	system("pause");

	return 0;
}







