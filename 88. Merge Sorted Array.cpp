#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	
		//nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
		//sort(nums1.begin(), nums1.end());
		//
		//int i = 0;
		//int len = nums1.size();
		//for (i = 0; i < len; i++)
		//	if (nums1[i] == 0)
		//		nums1.erase(nums1.begin() + i--);
		

		if( m < nums1.size())
			nums1.erase(nums1.begin() + m, nums1.end());
		if (n < nums2.size())
			nums1.erase(nums2.begin() + n, nums2.end());

		int i, j;
		int t = m;
		for (i = 0, j = 0; i < m && j < n; i++)
		{
			if (nums1[i] > nums2[j])
			{
				nums1.insert(nums1.begin() + i, nums2[j]);
				m++; j++;
			}
		}

		if (m != n+t)
			for( ;j < n; j++)
				nums1.insert(nums1.begin() + i++, nums2[j]);
	
	}
};

int main()
{
	Solution sol;

	vector<int> v1 = {0};
	vector<int> v2 = {1};

	sol.merge(v1, 0, v2, v2.size());
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << endl;

	system("pause");
	return 0;
}