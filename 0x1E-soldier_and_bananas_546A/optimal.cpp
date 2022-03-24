#include <iostream>
#include <cstdio>
#include <algorithm>

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
	int k, n, w;
	long long sum = 0,s = 1;

	scanf("%d%d%d", &k, &w, &n);

	sum = k * (1 + n) * n / 2;
	s = sum - w;

	if (s <= 0)
		printf("0\n");
	else
		printf("%lld\n", s);

}
