#include <iostream>
using namespace std;

void main()
{
	int sicaklik;

	cout << "Hava kaç derece?\n";
	cout << "--> ";

	cin >> sicaklik;

	if (sicaklik < 0)
	{
		cout << "Bugun hava buz gibi, evde kal. \n";
	}
	else if (sicaklik <= 30 && sicaklik >= 15)
	{
		cout << "Bugun hava cok guzel! Evde ne isin var? \n";
	}
	else if (sicaklik > 30)
	{
		cout << "Bugun hava cok sicak, fazla guneste durma! \n";
	}

}