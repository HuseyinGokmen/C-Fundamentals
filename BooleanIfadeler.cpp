#include <iostream>
using namespace std;

int main()
{
	// true --> 1
	// false --> 0
	bool final;
	int input;

	cout << "bir input giriniz: " << "\n";
	cin >> input;

	// && and ve
	// || or veya
	final = (input <= 100) && (input >= 0);

	cout << final << "\n";
}
