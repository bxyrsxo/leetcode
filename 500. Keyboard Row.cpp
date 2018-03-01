#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	vector<string> findWords(vector<string>& words) {

		const char first_row[] = { 'Q', 'q', 'W', 'w', 'E', 'e', 'R', 'r', 
			'T', 't', 'Y', 'y', 'U', 'u', 'I', 'i', 'O', 'o', 'P', 'p' };
		const char second_row[] = { 'A', 'a', 'S', 's', 'D', 'd', 'F', 'f',
			'G', 'g', 'H', 'h', 'J', 'j', 'K', 'k', 'L', 'l' };
		const char third_row[] = { 'Z', 'z', 'X', 'x', 'C', 'c', 'V', 'v',
			'B', 'b', 'N', 'n', 'M', 'm' };

		vector<string> vec;
		for (int i = 0; i < words.size(); i++)
		{
			int usage = 0;
			for (int j = 0; j < words[i].size(); j++)
			{
				char c = words[i][j];
				for (int k = 0; k < sizeof(first_row); k++)
					if (c == first_row[k])
					{
						usage |= 0x01;
						break;
					}
				for (int k = 0; k < sizeof(second_row); k++)
					if (c == second_row[k])
					{
						usage |= 0x02;
						break;
					}
				for (int k = 0; k < sizeof(third_row); k++)
					if (c == third_row[k])
					{
						usage |= 0x04;
						break;
					}
			}
			if (usage == 0x01 || usage == 0x02 || usage == 0x04)
				vec.push_back(words[i]);
		}

		return vec;
	}
};

int main()
{
	Solution sol;
	
	vector<string> vec, vec1;
	vec.push_back(string("Hello"));
	vec.push_back(string("Alaska"));
	vec.push_back(string("Dad"));
	vec.push_back(string("Peace"));

	vec1 = sol.findWords(vec);

	for (int i = 0; i < vec1.size(); i++)
		cout << vec1[i] << endl;

	system("pause");
	return 0;
}







