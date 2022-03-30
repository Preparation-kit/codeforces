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
	int e, untreated = 0, officers = 0, event;

	cin >> e;

	for( int i = 0; i <e;i++ )
	{
		cin >> event;

		if( event < 0 )
		{
			if( officers == 0 )
				untreated++;
			else
				officers--;
		}
		else
		{
			officers += event;
		}
	}

	cout << untreated << endl;
}
