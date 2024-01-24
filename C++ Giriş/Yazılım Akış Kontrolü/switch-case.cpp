#include <iostream>
#include <string>
using namespace std;

int main()
{
	int Gun;
	cout << "Bugun hafatnin kacinci gunu, giriniz: ";
	cin >> Gun;

	switch (Gun)
	{

	case 1:
		cout << "Bugun gunlerden Pazartesi" << endl;
		break;
	case 2:
		cout << "Bugun gunlerden Sali" << endl;
		break;
	case 3:
		cout << "Bugun gunlerden Carsamba" << endl;
		break;
	case 4:
		cout << "Bugun gunlerden Persembe" << endl;
		break;

	case 5:
		cout << "Bugun gunlerden Cuma" << endl;
		break;

	case 6:
		cout << "Bugun gunlerden Cumartesi" << endl;
		break;

	case 7:
		cout << "Bugun gunlerden Pazar" << endl;
		break;

	default:
		cout << "Gecerli bir gun degeri girmediniz! \n"; //hiç bir case'e girilmediği takdirde gerçekleşir
	}
	cout << "Program sonlandirildi.." << endl;

}