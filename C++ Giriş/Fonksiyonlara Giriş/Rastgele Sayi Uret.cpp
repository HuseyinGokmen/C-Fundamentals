#include <iostream>;
#include <cmath>;
#include <cstdlib>;
using namespace std;

void main()
{
	// 0 ile 100 arasinda 6 kez rastgele sayı üret
	cout << "Sayilar: ";

	int i = 1;
	while (i<7)
	{
		cout << rand() %101 << " ";  // rand fonksiyonu ile rastgele sayılar üretiriz // 101 ile modunu alırız 100'e kadar rastgele sayılar üretiriz
		i++;
	}
	

}