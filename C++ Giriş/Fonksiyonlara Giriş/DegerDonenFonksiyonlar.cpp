#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;



int kareHesapla();  // prototip ile kodun bu fonksiyonu tanımasını sağladım

int main()
{
	int n = kareHesapla();
	cout << n;

}

int kareHesapla()  // değer dönebilen bir fonksiyondur -> bu fonksiyon çalıştırılıp bittiği anda int bir değer dönecek!
{
	int sayi = 10;

	// return sayi * sayi;

	int sonuc = sayi * sayi;

	return sonuc;
}
