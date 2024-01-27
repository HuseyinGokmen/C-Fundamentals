#include <iostream>;
#include <cmath>; //fonksiyonlar için kütüphane
#include <cstdlib>; //fonksiyonlar için kütüphane
using namespace std;

void main()
{
	int sayi;
	cout << "Bir sayi giriniz: ";
	cin >> sayi;

	cout << "Sayinin karekoku: " << sqrt(sayi) << "\n";   // sqrt() fonksiyonu karekökünü döndürür
	cout << "Sayinin karekoku: " << pow(sayi, 2) << "\n";   // pow() ise karesini döndürür - sayi'nin 2 üssünü al

	exit(1); // kod bu satıra geldiğinde exit() fonksiyonu ile program sonlanır
	cout << "burayi yazdirmaz, ustte exit fonksiyonu var once!";
}
