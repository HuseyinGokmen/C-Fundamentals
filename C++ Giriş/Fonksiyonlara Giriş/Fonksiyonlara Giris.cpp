#include <iostream>;
#include <string>;
using namespace std;

void alanHesapla(int KenarUzunlugu)
{
	int alan = KenarUzunlugu * KenarUzunlugu;
	cout << "Kenar uzunlugu " << KenarUzunlugu << " olan karenin alani: " << alan << endl;
}

void main()
{
	/*
	//karanin alanı
	int KenarUzunlugu = 5;
	int alan = KenarUzunlugu * KenarUzunlugu;
	cout << "Kenar uzunlugu " << KenarUzunlugu << " olan karenin alani: " << alan << endl;

	KenarUzunlugu = 10;
	alan = KenarUzunlugu * KenarUzunlugu;
	cout << "Kenar uzunlugu " << KenarUzunlugu << " olan karenin alani: " << alan << endl;

	KenarUzunlugu = 30;
	alan = KenarUzunlugu * KenarUzunlugu;
	cout << "Kenar uzunlugu " << KenarUzunlugu << " olan karenin alani: " << alan << endl;

	KenarUzunlugu = 50;
	alan = KenarUzunlugu * KenarUzunlugu;
	cout << "Kenar uzunlugu " << KenarUzunlugu << " olan karenin alani: " << alan << endl;*/

	alanHesapla(5);
	alanHesapla(10);
	alanHesapla(30);    // <-- bu fonksiyon sayesinde üstteki gereksiz satırlardan kurtulmuş olduk
	alanHesapla(50);

}
