#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> getRow(int rowIndex) {
		rowIndex++;
		vector<vector<int>> vec_r;
		int m, i;
		vector<int> vec;
		for (m = 1; m <= rowIndex; m++)
		{
			vec.clear();
			vec.push_back(1);
			for (i = 1; i < m - 1; i++)
				vec.push_back(vec_r[m - 2][i - 1] + vec_r[m - 2][i]);
			if (m != 1)
				vec.push_back(1);
			vec_r.push_back(vec);
		}
		return vec;
	}
};

int main()
{
	Solution sol;
	
	vector<int> vec = sol.getRow(3);
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << "¡@";
	cout << endl;
	
	system("pause");

	return 0;
}







