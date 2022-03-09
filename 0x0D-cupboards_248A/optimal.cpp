#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int queries = 0;
	string line = "";
	int n, l, r, left(0), right(0);

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		left = 0;
		right = 0;

		scanf("%d", &n);

		for (int i = 0; i < n; ++i)
		{
			scanf("%d%d", &l, &r);
			left += l;
			right += r;
		}

		///            left_one, left_zero   right_one, right_zero
		printf("%d\n", min(left, n - left) + min(right, n - right));

	}

	return 0;
}
