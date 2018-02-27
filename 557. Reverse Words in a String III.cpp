#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	string reverseWords(string s) {
		stringstream in(s);
		stringstream out;

		vector<string> vec_str;
		while (!in.eof())
		{
			string str;
			in >> str;
			reverse(str.begin(), str.end());
			vec_str.push_back(str);
		}

		for (int i = 0; i < vec_str.size(); i++)
			out << vec_str[i] << " ";
		
		string r = out.str();
		r.erase(r.begin() + r.size() -1);
		return r;
	}
};

int main()
{
	Solution sol;
	
	cout << sol.reverseWords(string("Let's take LeetCode contest")) << endl;;
	
	system("pause");
	return 0;
}







