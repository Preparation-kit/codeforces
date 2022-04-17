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

void solving(void)
{
	int n = 0, k = 0;

	cin >> n >> k;
	cout << n << " : " << k << "\n";

	cout << k / n << "\n";
	cout << k % n << "\n";

	if (k / n == 2)
	{
		cout << " --> " << n - (k % n) << "\n";
		// cout << n - (k % n) << "\n";
	}
	else
	{
		// cout << 0 << "\n";
		cout << " 0 will be the grades of exams are equals to 2" << "\n";
	}

}
