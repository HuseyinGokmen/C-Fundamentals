#include <iostream>
#include <cstdlib> // srand ve rand fonksiyonları için gerekli başlık
#include <ctime> // time fonksiyonu için gerekli başlık
using namespace std;



int main()
{
	srand(time(NULL)); // Zamanı seed olarak kullan -> program her çalıştığında farklı bir değer üret anlamında

	if (int i = rand(); i % 2 == 0)                //cpp version 17'den itibaren bu satırdaki yazım şekli kullanılabilir
	{
		cout << i << " i cift sayidir !\n";
	}
	else
	{
		cout << i << " i tek sayidir !\n";
	}

	return 0;
}



/*    Switch Case olarakta benzer bir örnek
int main()
{
	srand(time(NULL));

	switch (int i = rand(); i)
	{
	case 13:
		cout << i << " ugursuz sayiii kapa kapa programi!";
			break;

	default:
		cout << i << " ugurlu insan!";
		break;
	}

}
*/

