#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Solution {
public:
	bool isToeplitzMatrix(vector<vector<int>>& matrix) {
		int identical = true;
		int row = matrix.size();
		int col = matrix[0].size();
		for(int i = col -1; i >= 0; i--)
		{
			int u = 0, v = i;
			while (u + 1 < row && v + 1 < col)
			{
				if (matrix[u][v] != matrix[u + 1][v + 1])
					return false;
				u++; v++;
			}
		}

		for (int j = 1; j < matrix.size(); j++)
		{
			int u = j, v = 0;
			while (u + 1 < row && v + 1 < col)
			{ 
				if (matrix[u][v] != matrix[u + 1][v + 1])
					return false;
				u++; v++;
			}
		}

		return true;
	}
};

int main()
{
	Solution sol;
	
	vector<vector<int>> matrix;
	vector<int> vec;

	vec = { 36,59,71,15,26,82,87 };
	matrix.push_back(vec);
	vec = { 56,36,59,71,15,26,82 };
	matrix.push_back(vec);
	vec = { 15,0,36,59,71,15,26 };
	matrix.push_back(vec);

	cout << sol.isToeplitzMatrix(matrix) << endl;;
	
	system("pause");
	return 0;
}







