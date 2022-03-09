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
	int cupboards = 0, left = 0, right = 0, count_left_one = 0, count_right_one = 0;
	int time = 0, subcupboards = 0, count_left_zero = 0, count_right_zero = 0;

	cin >> cupboards;
	subcupboards = cupboards;

	while (subcupboards--)
	{
		cin >> left >> right;
		count_left_one += left;
		count_right_one += right;
	}

	count_right_zero = cupboards - count_right_one;
	count_left_zero = cupboards - count_left_one;

	if (count_right_one > count_right_zero)
	{
		time += count_right_zero;
	}
	else if (count_right_one < count_right_zero)
	{
		time += count_right_one;
	}
	else
	{
		time += count_right_one;
	}


	if (count_left_one > count_left_zero)
	{
		time += count_left_zero;
	}
	else if (count_left_one < count_left_zero)
	{
		time += count_left_one;
	}
	else
	{
		time += count_left_one;
	}

	// cout << count_left_one << " d " << count_right_one << "\n";
	cout << time << "\n";
}
