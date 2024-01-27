#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>
using namespace std;


int GlobalDegisken = 0;			// süslü parantez dışındaki değişkenler GLOBAL DEĞİŞKENLERDİR


void function()
{
	int LocalDegisken = 0;
	LocalDegisken = LocalDegisken + 5;

	cout << "Local degisken function: " << LocalDegisken << "\n";

	GlobalDegisken = GlobalDegisken + 10;

}

void main()
{
	// bu süslü parantez içerisindeki(scope) değişkenler LOCAL DEĞİŞİKLENLERDİR
	int LocalDegisken = 0;
	LocalDegisken = LocalDegisken + 10;

	cout << "Local degisken main: " << LocalDegisken << "\n";
	function(); // main içindeki LocalDegisken ile function içindeki LocalDegisken birbirlerinden bağımsızdır!

	cout << "Local degisken main: " << LocalDegisken << "\n";
	cout << endl;

	GlobalDegisken = GlobalDegisken + 1; //GlobalDegisken e heryerden erişebildiğimiz için şu an da toplam değeri 11 olarak dönecektir

	cout << "Global degisken main: " << GlobalDegisken << "\n ";
}