#include <iostream>
#include <map>

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
	int n = 0, time = 0,  arr[3] = {0};

	cin >> n;

	cin >> time;

	arr[0] = time;
	arr[1] = 1;
	arr[2] = 1;

	for (int i = 2; i <= n; ++i)
	{
		cin >> time;

		if (time < arr[0])
		{
			arr[0] = time;
			arr[1] = 1;
			arr[2] = i;

			// cout << "arr[0] " << arr[0]
			//      << " arr[1] " << arr[1]
			//      << " arr[2] " << arr[2]
			//      << "\n";
		}
		else if (time == arr[0])
		{
			arr[1] += 1;
			arr[2] = i;

			// cout << "arr[0] " << arr[0]
			//      << " arr[1] " << arr[1]
			//      << " arr[2] " << arr[2]
			//      << "\n";
		}
	}



	if (arr[1] > 1)
		cout << "Still Rozdil" << "\n";
	else
		cout << arr[2] << "\n";
}
