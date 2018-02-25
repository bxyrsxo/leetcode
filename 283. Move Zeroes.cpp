void Solution::moveZeroes(vector<int>& nums) {
	int len = nums.size();
	int i, j;
	int k = 0;

	int zero_cnt = 0;
	for (i = 0; i < len; i++)
		if (!nums[i])
			zero_cnt++;

	int reverse_zero_cnt = 0;
	for (i = len - 1; i >= 0; i--)
		if (!nums[i])
			reverse_zero_cnt++;
		else
			break;

	zero_cnt -= reverse_zero_cnt;

	while (zero_cnt)
	{
		for (i = 0; i < len - k - reverse_zero_cnt; i++)
		{
			if (nums[i] == 0)
			{
				zero_cnt--;
				for (j = i; j < len - 1 - k - reverse_zero_cnt; j++)
					swap(nums[j], nums[j + 1]);
				k++;
			}
		}
	}
}