#include <iostream>

using namespace std;

void solving();
bool is_beautiful(int year);
bool is_different(int a, int b, int c, int d);

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

void solving()
{
	int year = 0, temp = 0;
	int digits[4];

	cin >> year;

	year++;
	// cout << year << "\n";

	for (;;)
	{
		temp = year;
		for (int i = 0; i < 4; ++i)
		{
			digits[i] = temp % 10;
			temp /= 10;
		}

 		if (is_different(digits[0], digits[1], digits[2], digits[3]))
		{
			for (int i = 3; i >= 0; i--)
				cout << digits[i] << "";

			cout << "\n";
			break;
		}

		year++;

		// if (year == 9000)
		// 	break;
	}
}



bool is_different(int a, int b, int c, int d)
{
	return (a != b && a != c && a != d && b != c && b != d && c != d);
}
