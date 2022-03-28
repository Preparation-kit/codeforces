#include <iostream>

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

void print_array(int *arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << "\n";
	}

	// cout << "\n";
}

void solving(void)
{
	int n = 0, m = 0, x = 0, y = 0, right = 0, left = 0;

	cin >> n;

	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cin >> m;

	for (int i = 0; i < m; ++i)
	{
		cin >> x >> y;
		// cout << x << " " << y << "\n";

		left = y - 1;
		right = arr[(x - 1)] - y;
		// cout << "left: "<< left << " right: " << right << "\n";

		arr[(x - 1) - 1] += left;
		arr[(x - 1) + 1] += right;
		arr[(x - 1)] = 0;

		// print_array(arr, n);
		// cout << "-----------------------------" << "\n";
	}

	print_array(arr, n);
}
