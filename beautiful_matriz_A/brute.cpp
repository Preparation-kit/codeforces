#include <iostream>


using namespace std;


int main(void)
{
	int coordenates[2] = {};
	int single_one = 0, moves_x = 0, moves_y = 0;
	int queries = 0;
	string line = "";

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; j++)
			{
				cin >> single_one;
				if (single_one == 1)
				{
					coordenates[0] = i;
					coordenates[1] = j;

				}
			}
		}

		// cout << "he" << coordenates[0] << "\n";
		// cout << "he" << coordenates[1] << "\n";

		moves_x = abs(2 - coordenates[0]);
		moves_y = abs(2 - coordenates[1]);

		cout << moves_x + moves_y << "\n";

	}

	return 0;
}
