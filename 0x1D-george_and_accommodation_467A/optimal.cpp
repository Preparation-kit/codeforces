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
	int n;
	int p, q;
	int count{0};
	const int Space_for_George_and_Alex{2};

	std::cin >> n;

	while (n--)
	{
		std::cin >> p >> q;

		if (q - p >= Space_for_George_and_Alex)
		{
			++count;
		}
	}

	std::cout << count << "\n";
}
