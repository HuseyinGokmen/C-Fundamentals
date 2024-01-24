#include <iostream>
using namespace std;

void main()
{

	// vize1= 0.25 - - vize2= 0.25 - - final= 0.5
	string OgrIsmi;
	int Vize1, Vize2, Final;

	cout << "Ogrenci ismini giriniz: \n";
	cin >> OgrIsmi;

	cout << "Ogrenci notlarini sirasiyla (1. vize, 2. vize ve final seklinde) giriniz: \n";
	cin >> Vize1 >> Vize2 >> Final;

	double OrtalamaNot = Vize1 * 0.25 + Vize2 * 0.25 + Final * 0.5;

	if (OrtalamaNot >= 90)
	{
		cout << "Tebrikler " << OgrIsmi << ", notun: AA, Ortalaman: " << OrtalamaNot << "\n";
	}
	else if (OrtalamaNot >= 80)
	{
		cout << "Tebrikler " << OgrIsmi << ", notun: BB, Ortalaman: " << OrtalamaNot << "\n";
	}
	else if (OrtalamaNot >= 70)
	{
		cout << "Tebrikler " << OgrIsmi << ", notun: CC, Ortalaman: " << OrtalamaNot << "\n";
	}
	else if (OrtalamaNot >= 60)
	{
		cout << "Tebrikler " << OgrIsmi << ", notun: DD, Ortalaman: " << OrtalamaNot << "\n";
	}
	else
	{
		cout << "Dersten kaldiniz " << OgrIsmi << ", notun FF, Ortalaman: " << OrtalamaNot << "\n";
	}

}