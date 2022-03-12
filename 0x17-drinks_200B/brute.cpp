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
	int drinks = 0;
	double percent = 0, mililliters = 0, l = 0;

	cin >> drinks;

	for (int i = 0; i < drinks; ++i)
	{
		cin >> percent;
		mililliters += percent / 100;
		// cout << "---" << mililliters << "\n";
	}

	l = (mililliters / drinks) * 100;
	printf("%10.12f\n", l);
}
