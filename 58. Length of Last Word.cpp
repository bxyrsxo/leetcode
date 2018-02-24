#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;

class Solution {
public:
	int lengthOfLastWord(string s) {
		stringstream ss;
		ss << s;
		string str_last;
		while (!ss.eof())
			ss >> str_last;
		return str_last.size();
	}
};

int main()
{
	Solution sol;
	string str("Hello world");

	cout << sol.lengthOfLastWord(str) << endl;

	system("pause");
	return 0;
}