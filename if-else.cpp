#include <iostream>
using namespace std;

void main() {

	int input;

	cout << " rakam giriniz: \n" << " ";
	cin >> input;

	if (input < 10 && input > -1)
	{
		cout << " bu bir rakamdir.\n";
	}
	else
	{
		cout << " bu bir rakam degildir!\n";
	}
}