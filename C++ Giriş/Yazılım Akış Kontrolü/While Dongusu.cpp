#include <iostream>
using namespace std;

void main() {

	int sayi;
	cout << "bir sayi giriniz--> ";
	cin >> sayi;

	while (sayi > 0)   //koşul true olduğu müddetçe devam eder 
	{
		cout << "donence! --> " << sayi << "\n";

		sayi--;

		if (sayi == 5)  //while true olsada kod her seferinde bu koşulu da kontrol edecek, ve break gördüğü an duracak.
		{
			break;
		}
	}
	cout << "donence bitti (:" << endl;;
}