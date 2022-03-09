#include <iostream>
#include<string>

using namespace std;

int main()
{
	int queries = 0;
	string line = "";
	int t, x;
	string s;

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		cin>>t;

		while(t--)
		{
			cin >> s;

			x = s.length();
			if (x <= 10)
				cout << s << endl;
			else
				cout << s[0] << x - 2 << s[x - 1] << endl;
		}
	}


	return 0;
}
