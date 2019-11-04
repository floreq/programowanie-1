#include <iostream>
#include "functions.h"

using namespace std;

// Zad 1. Cztwery metody:
// f1 - Wyswietlenie tablicy jednowymiarowej
// f2 - Wysiwetlenie tablicy dwuwymiarowej
// f3 - Czyszczenie tablicy jednowymiarowej, zamiana wartosci tablicy na 0
// f4 - Czyszczenie tablicy dwuwymiarowej, zamiana wartosci tablicy na 0
// plik naglowkowy deklaracje
// plik cpp definicja
// plik z main i testowanie

int main()
{
	double tab[10] = {4, 2, 3, 2};
	double tab1[10][10] = { {1,2,3}, {3,2,1} , {6, 6, 6, 5} };
	displayArray(tab, 10);
	displayArray(tab1, 2, 5);
	clearArray(tab, 10);
	clearArray(tab1, 10, 10);

	system("pause");
}