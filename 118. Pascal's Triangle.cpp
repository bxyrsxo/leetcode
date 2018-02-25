#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class Solution {
public:
	vector<vector<int>> generate(int numRows) {

		vector<vector<int>> vec_r;
		int m, i;
		for( m = 1; m <=numRows; m++)
		{
			vector<int> vec;
			vec.push_back(1);
			for (i = 1; i < m-1; i++)
				vec.push_back(vec_r[m-2][i - 1] + vec_r[m-2][i]);
			if (m != 1)
				vec.push_back(1);
			vec_r.push_back(vec);
		}
		return vec_r;
	}
};

int main()
{
	Solution sol;

	vector<vector<int>> vec;
	vec = sol.generate(25);

	int i, j;
	for( i = 0; i < vec.size(); i++)
	{ 
		for (j = 0; j < vec[i].size(); j++)
			cout << vec[i][j] << " ";
		cout << endl;
	}

	system("pause");
	return 0;
}
