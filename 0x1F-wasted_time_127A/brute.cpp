#include <iostream>
#include <cmath>

using namespace std;

void solving(void);

int main(void)
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
	int n = 0, k = 0, x = 0, y = 0;
	int tx = 0, ty = 0;
	double distance = 0.0, time = 0.0;
	const int SPEED = 50;

	cin >> n >> k;

	cin >> x >> y;

	for (int i = 0; i < n - 1; ++i)
	{
		tx = x;
		ty = y;

		cin >> x >> y;

		// cout << " ----> dx" << pow(x - tx, 2)  << "\n";
		// cout << " ----> dy" << pow(y - ty, 2)  << "\n";

		distance += sqrt(   pow((x - tx), 2) + pow((y - ty), 2));
	}

	// cout << "distance: " << distance << "\n";

	time = distance / SPEED;

	// cout << "time: " << time * k << "\n";
	printf("%.9f\n", time * k);
}
