#include<bits/stdc++.h>

using namespace std;

int main()
{
	int queries = 0;
	string line = "";
	int n, k, l, c, d, p, nl, np,mm,per,tl,to;

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		cin >> n >> k >> l >> c >> d >> p >> nl >> np;

		mm = k * l;
		per = mm / nl;
		tl = c * d;
		to = p / np;

		cout << min(per, min(tl, to)) / n << endl;
	}

	return 0;
}
