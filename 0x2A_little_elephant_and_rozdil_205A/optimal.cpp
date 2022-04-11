#include <iostream>

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
	int n, time, min_time(1000000001), min_index(0), count(1);
	scanf("%d", &n);

	for (int i = 1; i <= n; ++i)
	{
		scanf("%d", &time);

		if (time < min_time)
		{
			min_time = time;
			min_index = i;
			count = 1;
		}
		else if (time == min_time)
		{
			count += 1;
		}
	}

	if (count == 1)
	{
		printf("%d\n", min_index);
	}
	else
	{
		printf("Still Rozdil\n");
	}
}
