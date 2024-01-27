#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int karesiniHesapla(int sayi)   // bu şekilde fonksiyona parametre verdik -> değişkenin türünü ve ismini belirttik
{
	int sonuc = sayi * sayi;

	return sonuc;
}

void main()
{
	int giris;
	while (true)
	{
		cout << "Bir sayi giriniz: ";
		cin >> giris;
		int x = karesiniHesapla(giris);

		cout << "Sayinin karesi: " << x << endl;
		cout << endl;
	}

}

