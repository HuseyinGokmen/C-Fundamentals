#include <iostream>
using namespace std;

void main()
{
	int sayi;
	cout << "bir sayi giriniz: ";
	cin >> sayi;


	do
	{
		cout << "sayi: " << sayi << endl;
		sayi--; 
	} while (sayi > 0);   //false olsada 1 kez çalışır ve de koşul true olduğu müddetçe yukarısı çalışır v
	//normalde sadece while döngüsünde false olsaydı aşağısı hiç işlenmezdi, ama do while'da false olsa da 1 kez çalışır
	//yani do while'da önce yazdırır sonra koşul kontrolü olur.


		cout << "pogram sonlandi \n";
}