#include <iostream>
using namespace std;

void counter()
{
	static int sayac = 0;  // static tanımladağımda değişken yok edilmeden global tanımlanmış gibi çalışır (main bittiği anda yok edilir)

	sayac++;
	
	cout << "sayac: " << sayac << "\n";

}

int main()
{
	counter();
	counter();
	// sayac = 0; global tanımlasaydım bu kod satırı çalıacaktı ve sayac sıfırlanacaktı, (örneğin iş arkadaşlarımızdan maini yazan kişi sayacımızı global tanımlamış olsaydık yanlışlıkla kullanırdı ve buga sebep olabilirdik, bunun da önüne geçmen adına static olarak tanımladık)
	counter();



	return 0;   
}