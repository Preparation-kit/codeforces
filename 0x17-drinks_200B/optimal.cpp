#include <iostream>
#include <iomanip>

using namespace std;

int main (void)
{
	int queries = 0;
	string line = "";
	int n,a[110];
	double ans=0.0,sum=0.0;

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
		}

		ans = sum/n;
		cout << fixed << setprecision(12) << ans << endl;
	}

	return 0;
}
