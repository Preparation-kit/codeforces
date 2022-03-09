#include <iostream>
#include <string>

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
	string borze_code = "";

	cin >> borze_code;

	// cout << borze_code << " " << borze_code.size() << "\n";

	for (int i = 0; i < (int) borze_code.size(); ++i)
	{
		// cout << "item " << i << "\n";

		if (borze_code[i] == '-' && borze_code[i + 1] == '.')
		{
			cout << "1" << "";
			i += 1;
		}
		else if (borze_code[i] == '-' && borze_code[i + 1] == '-')
		{
			cout << "2" << "";
			i += 1;
		}
		else
		{
			// cout << "zero ---> " << borze_code[i] << "\n";
			cout << "0" << "";
		}
	}

	cout << "\n";
}
