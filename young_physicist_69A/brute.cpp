#include <iostream>

using namespace std;

void print_matriz(int **m, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << m[i][j] << " ";
		cout << "\n";
	}

}

int main(void)
{
	int n = 0, sx = 0, sy = 0, sz = 0;
	int queries = 0;
	string line = "";

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		cin >> n;

		int **outter = new int*[n];

		for (int i = 0; i < n; ++i)
		{
			outter[i] = new int[3];
			for (int j = 0; j < 3; j++)
				cin >> outter[i][j];
		}

		for (int i = 0; i < n; ++i)
		{
			sx += outter[i][0];
			sy += outter[i][1];
			sz += outter[i][2];
		}

		// print_matriz(outter, n);

		if (sx == 0 && sy == 0 && sz == 0)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}

	return 0;
}
