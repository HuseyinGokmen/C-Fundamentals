#include <iostream>
using namespace std;

int main()
{
	int sayi1, sayi2;
	char secim;
	char devam;

	while (1)
	{
		cout << "Lutfen matematik isleminizi girin: ";
		cin >> sayi1 >> secim >> sayi2;

		switch (secim)
		{

		case '+':
			cout << "Sonuc: " << sayi1 + sayi2 << endl;

			break;

		case '-':
			cout << "Sonuc: " << sayi1 - sayi2 << endl;
			break;

		case '*':
			cout << "Sonuc: " << sayi1 * sayi2 << endl;
			break;

		case '/':
			cout << "Sonuc: " << sayi1 / sayi2 << endl;
			break;

		default:
			cout << "Yanlis islem \n";
		}

		cout << "Islem yapmaya devam etmek istiyorsanız 'y' tusuna basiniz --> ";
		cin >> devam;
		if (devam != 'y')
		{
			break;
		}

	}

}
