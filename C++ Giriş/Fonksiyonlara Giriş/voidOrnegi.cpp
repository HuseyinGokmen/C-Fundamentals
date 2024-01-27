#include <iostream>;
#include <cmath>;
#include <cstdlib>;
using namespace std;

void printMessage()  //void bize değer döndürmez sadece içerisindeki işlemleri yapar //fonksiyonu üste tanımladım çünkü kod yukarıdan aşağıya okunmakta
{							// yukarı da yazmayacaksak prototip şeklinde belirtmeliyiz-> void printMessage(); şeklinde belirtirsek fonksiyonu main'den sonra bile yazsak oluşturduğumuz prototip sayesinde kod istediğimiz gibi çalışır
	cout << "Hello World! \n";
}

void main()
{
	printMessage();  // main içerisine bu fonksiyonu çağırmak zorundayım, hiçbir şey yazmazsam ekranda bir şey yazmayacaktır

	int i = 0;
	while (i < 9)
	{
		printMessage();
		i++; // bu sayede üstteki printMessage fonksiyonunu çağırmamla beraber toplam 10 kere yazdırmış oldum
	}
}