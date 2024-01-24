#include <iostream>
using namespace std;

void main()
{
	/*
	

	int a = 3;
	int b = 33;

	if (a > b)
	{
		cout << "a, b'den buyuktur!";
	}
	else if (a < b)
	{
		cout << "a, b'den kucuktur!";
	}

	 // bunu daha kısa yoldan yapmak için  aşağıdaki satırları uygulayabiliriz < < < 
	*/

	int a = 3;
	int b = 33;

	string mesaj = (a > b) ? "a, b'den buyuk" : "a, b'den kucuk";  // condition'a bakıyor true ise soldakine - false ise sağdakine atıyor
	cout << mesaj;

}