#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void solving(void);

int main()
{
	int queries = 0;
	string line = "";

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		solving();
	}

	return 0;
}

void solving(void)
{
	int n, k;
	double x, y, x0, y0, total(0.0);

	cin >> n >> k;
	cin >> x0 >> y0;

	while (--n)
	{
		cin >> x >> y;
		total += sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
		x0 = x;
		y0 = y;
	}

	cout << fixed << setprecision(9) << total * k / 50 << endl;
}
