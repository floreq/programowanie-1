#include <iostream>
using namespace std;

// Gdzie mozna definiowac zmienne?
// Zmienne lokalne (np. w metodzie), zmienne globalne (np. przed funkcja)
// Zmienne globalne sa autoatycznie inicjalizowane z wartoscia 0
// Zmienne globalne sa tworzone na poczatku dzialania programu
// Zmienne lokalne musza byc recznie definiowane, nie maja podstawowje wartosci
// Problemy ze zmiennymi globalnymi: zrozumienie odwolan do zmiennej, wiele procesow kozysta z jednej zmiennej i co teraz
double zm_globalna;
int main()
{
	// Roznica miedzy int x = 0 (inicjalizacja), a x = 10 (przypisanie)
	double zm01 = 0;
	zm01 = 10;
	cout << "zm01\t" << zm01 << endl;
	// Wczytywanie z klawiatury
	cout << "Podaj wartosc";
	cin >> zm01;
	// Inkrementacja/Dekrementacja
	// Roznica w x++ i ++x
	int a = 5;
	cout << "Postinkrementacja" << a++ << endl; // 5
	cout << a << endl; // 6
	// Operaotry bitowe trzeba je w dawacie dawac, tylko na typie int 
	// & iloczyn, i
	// | suma, lub
	// <<2 przesuniecie w prawo o 2 bity
	// >> przesuniecie w lewo
	// ^ xor
	// ! negacja

	return 0;
}
