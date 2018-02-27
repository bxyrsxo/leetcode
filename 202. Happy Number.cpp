#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Solution {
public:
	bool isHappy(int n) {
		
		int num = n;
		int arr[] = { 4, 16, 37, 58, 89, 145, 42, 20};
		int arr_index = 0;
		for (;;)
		{
			vector<int> vec;
			int digits = 0;

			for (int t = 1;;)
			{
				if (num / t == 0)
					break;
				else
				{
					t *= 10;
					digits++;
				}
			}

			
			for (int i = 0; i < digits; i++)
			{
				vec.push_back(num % 10);
				num /= 10;
			}

			int x = 0;
			for (int i = 0; i < vec.size(); i++)
				x += (vec[i] * vec[i]);
			
			if (x==1)
				return true;
			else 
			{
				if (x == arr[arr_index])
					arr_index++;
				else
					arr_index = 0;

				if( arr_index == 8)
					return false;
			}
			num = x;
		}
	}
};

int main()
{
	Solution sol;
	cout << sol.isHappy(18222) << endl;;
	
	system("pause");

	return 0;
}







