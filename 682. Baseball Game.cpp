#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>


using namespace std;

class Solution {
public:
	int calPoints(vector<string>& ops) {
		
		int sum = 0;
		vector<int> num = { 0, 0};

		for (int i = 0; i < ops.size(); i++)
		{
			if (ops[i] == "C")
			{ 
				sum -= num.back();
				num.erase(num.begin() + num.size()-1);
			}
			else if (ops[i] == "D")
			{
				int d = num.back() * 2;
				sum += d;
				num.push_back(d);
			}
			else if (ops[i] == "+")
			{
				int p = num.back() + num[num.size() - 2];
				sum += p;
				num.push_back(p);			
			}
			else 
			{
				int n = atoi(ops[i].c_str());
				sum += n; 
				num.push_back(n);
			}
		}
		return sum;
	}
};

int main()
{
	Solution sol;

	vector<string> vec;
	vec.push_back("5");
	vec.push_back("-2");
	vec.push_back("4");
	vec.push_back("C");
	vec.push_back("D");
	vec.push_back("9");
	vec.push_back("+");
	vec.push_back("+");
	cout << sol.calPoints(vec) << endl;
	
	system("pause");
	return 0;
}







