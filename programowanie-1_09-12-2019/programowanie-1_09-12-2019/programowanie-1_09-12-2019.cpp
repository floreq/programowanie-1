#include <iostream>
#include <string.h>

using namespace std;

struct TOsoba {
	int Id;
	char Imie[50];
	char Nazwisko[100];
	char Pesel[12]; // 12 poniewarz ostatni znak to null
	int Du;
	int Mu;
	int Ur;
	double Wzrost;
};

TOsoba osoba[50];

// char musi byc z const
void initOsoba(TOsoba & toInit, int id, const char imie[50], const char nazwisko[100], const char pesel[11], int du, int mu, int ur, double wzrost) {
	toInit.Id = id;
	strcpy_s(toInit.Imie, imie);
	strcpy_s(toInit.Nazwisko, nazwisko);
	strcpy_s(toInit.Pesel, pesel);
	toInit.Du = du;
	toInit.Mu = mu;
	toInit.Ur = ur;
	toInit.Wzrost = wzrost;
}
// id, imie, nazwisko
void showShortOsoba(const TOsoba & o) {
	cout << o.Id << " ";
	cout << o.Imie << " ";
	cout << o.Nazwisko << endl;
}

void showLongOsoba(const TOsoba& o) {
	cout << o.Id << " ";
	cout << o.Imie << " ";
	cout << o.Nazwisko << " ";
	cout << o.Pesel << " ";
	cout << o.Du << " ";
	cout << o.Mu << " ";
	cout << o.Ur << " ";
	cout << o.Wzrost << endl;
}

void showAllOsoba(int n, TOsoba o[], void (*show)(const TOsoba& o)) {
	for (int i = 0; i < n; i++) {
		show(o[i]);
	}
}
// tab, ilosc sortowanych elementow, sizeof(int) - typ ktory chcemy sortowac, sort - sprawdza czy jest rowne
int sort(const void *w1, const void *w2) {
	const TOsoba* a = (const TOsoba*)w1; // zutowanie 
	const TOsoba* b = (const TOsoba*)w2;
	return a->Wzrost - b->Wzrost;
}

int rSort(const void* w1, const void* w2) {
	const TOsoba a = *(const TOsoba*)w1; // zutowanie i z wyluskaniem obiektu - pierwsa gwiazdka 
	const TOsoba b = *(const TOsoba*)w2;
	return b.Wzrost - a.Wzrost;
}

int sortByNazwisko(const void* w1, const void* w2) {
	const TOsoba a = *(const TOsoba*)w1; // zutowanie i z wyluskaniem obiektu - pierwsa gwiazdka 
	const TOsoba b = *(const TOsoba*)w2;
	return strcmp(a.Nazwisko, b.Nazwisko);
}

int main()
{
	// Wpisywanie danych do tablicy
	initOsoba(osoba[0], 1, "Jan", "Kowalski", "11111111111", 1, 12, 1998, 180);
	initOsoba(osoba[1], 2, "Zuza", "Nowak", "11111111111", 1, 12, 1997, 172);
	initOsoba(osoba[2], 3, "Hipolita", "Wieloslawski", "11111111111", 10, 12, 1968, 162);
	initOsoba(osoba[3], 4, "Marcin", "Janosik", "11111111111", 12, 12, 1996, 151);
	initOsoba(osoba[4], 5, "Cezary", "Baryka", "11111111111", 11, 12, 1994, 184);

	qsort(osoba, 5, sizeof(TOsoba), sort);
	//showShortOsoba(osoba[0]);
	showAllOsoba(5, osoba, showLongOsoba);
	qsort(osoba, 5, sizeof(TOsoba), sortByNazwisko);
	showAllOsoba(5, osoba, showLongOsoba);

	system("pause");
}
