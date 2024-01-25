#include <iostream>
using namespace std;

int main()
{
    char harfNotu;
    cout << "Harf notunuzu giriniz: ";

    cin >> harfNotu;

	switch (harfNotu)
	{
	case 'a':
	case 'A':
		cout << "Mukemmel bir harf notu!\n";
		break;

	case 'b':
	case 'B':
		cout << "Iyi bir harf notu!\n";
		break;

	case 'c':
	case 'C':
		cout << "Idare eder! \n";
		break;

	case 'd':
	case 'D':
		cout << "Kalmaktan iyi!\n";
		break;


	case 'f':
	case 'F':
		cout << "Daha cok calismalisin!\n";
		break;

	default:
		cout << "Lutfen gecerli bir harf notu giriniz!\n";
		break;
	}
	cout << "Program sonlandi.\n";
}
