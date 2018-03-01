#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	vector<string> fizzBuzz(int n) {
		vector<string> vec;
		for (int i = 1; i <= n; i++)
		{
			if (i % 3 == 0 && i % 5 == 0)
				vec.push_back("FizzBuzz");
			else if (i % 3 == 0)
				vec.push_back("Fizz");
			else if (i % 5 == 0)
				vec.push_back("Buzz");
			else
				vec.push_back(to_string(i));
		}
		return vec;
	}
};

int main()
{
	Solution sol;
	
	vector<string> vec;


	vec = sol.fizzBuzz(15);

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << endl;

	system("pause");
	return 0;
}







