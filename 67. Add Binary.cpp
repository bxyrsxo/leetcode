string Solution::addBinary(string a, string b) {
	int size_a = a.size();
	int size_b = b.size();

	int f = 0;		// add carry flag
	char c;			// character to push back onto the vector container

	int i, j;		// indices
	char x, y;		// binaries
	vector<char> vec;
	for (i = size_a - 1, j = size_b - 1; i >= 0 || j >= 0; )
	{
		x = i >= 0 ? a[i--] : '0';
		y = j >= 0 ? b[j--] : '0';

		if (!f)
		{
			if (x == '1' && y == '1')
			{
				c = '0';
				f = 1;
			}
			else if (x == '1' && y == '0')
				c = '1';
			else if (x == '0' && y == '1')
				c = '1';
			else
				c = '0';
		}
		else
		{
			if (x == '1' && y == '1')
			{
				c = '1';
				f = 1;
			}
			else if (x == '1' && y == '0')
			{
				c = '0';
				f = 1;
			}
			else if (x == '0' && y == '1')
			{
				c = '0';
				f = 1;
			}
			else
			{
				c = '1';
				f = 0;
			}

		}

		vec.push_back(c);

	}

	if (f)
		vec.push_back('1');

	string str;
	for (i = vec.size() - 1; i >= 0; i--)
		str.push_back(vec[i]);

	return str;
}