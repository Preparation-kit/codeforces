#include <iostream>

using namespace std;

int main()
{
	int n, x, y, z, xsum(0), ysum(0), zsum(0);
	int queries = 0;
	string line = "";

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		cin >> n;

		while (n--)
		{
			cin >> x >> y >> z;
			xsum += x;
			ysum += y;
			zsum += z;
		}

		if (xsum == 0 && ysum == 0 && zsum == 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}
