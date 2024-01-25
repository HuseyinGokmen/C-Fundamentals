#include <iostream>
using namespace std;

void main()
{
	cout << "Bir sayi giriniz: ";

	int i;

	cin >> i;

	for (i; i >= -5; i--)  //başangıç değeri , koşulu, ve (koşula göre)arttırma/azaltma
	{
		cout << "i: " << i << "\n";

		if (i == 0)
		{
			break;
		}
	}

	cout << "Kod sonlandi.\n";

}