#include <iostream>
#include <vector>

using namespace std;

void solving(void);
string swap(string queue, int current_index);


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

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

string swap(string queue, int index)
{
	char ch = queue[index];
	queue[index] = queue[index + 1];
	queue[index + 1] = ch;

	return queue;
}


void solving(void)
{
	int n = 0, time = 0;
	string queue = "";
	vector<int> v;

	cin >> n >> time >> queue;

	while (time--)
	{
		// cout << "------>  " << queue << "\n";

		for (int i = 0; i < n - 1; ++i)
		{
			if (queue[i] == 'B' && queue[i + 1] == 'G')
			{
				v.push_back(i);
			}
		}

		// for (int i = 0; i < (int) v.size(); ++i)
		// {
		// 	cout << v[i] << " ";
		// }

		// cout << "\n";

		for (size_t i = 0; i < v.size(); ++i)
		{
			queue = swap(queue, v[i]);
		}

		if (time == 0)
			cout << queue << "\n";

		v.clear();
	}
}
