#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>
using namespace std;

bool esitlikKontrolu(int Giris, int Rastgele)
{
	if (Giris == Rastgele)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void main()
{
	int Giris;
	srand(time(NULL));
	int RandomSayi = rand() % 10;
	bool sonuc = false;

	while (true)
	{
		cout << "Bir sayi giriniz: ";
		cin >> Giris;
		sonuc = esitlikKontrolu(Giris, RandomSayi);

		if (sonuc)
		{
			cout << "Tebrikler dogru bildin!!! \a ";
			exit(1);
		}
		else
		{
			cout << "Hay aksi yanlis tahmin, tekrar dene! \n ";
		}
	}

}