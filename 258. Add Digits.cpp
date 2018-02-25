int Solution::addDigits(int num) {
	int digits = 0;
	int tmp = num;
	while (tmp) {
		tmp /= 10;
		digits++;
	}

	int d;
	int sum = 0;
	int t;
	for (d = digits - 1; d >= 0; d--)
	{
		t = (int)pow(10, d);
		sum += num / t;
		num -= (num / t) * t;
	}
	if (sum < 10)
		return sum;
	else
		return addDigits(sum);
}