#include <iostream>

using namespace std;



struct TOsoba {
	int Id;
	char Imie[50];
	char Nazwisko[100];
};

TOsoba* initOsoba(int id, const char imie[50], const char nazwisko[100]) {
	TOsoba* result = new TOsoba();
	result->Id = id;
	strcpy_s(result->Imie, imie);
	strcpy_s(result->Nazwisko, nazwisko);
	
	return result;
}

void showOsoba(TOsoba* wsk[], int n) {
	for (int i = 0; i < n; i++) {
		cout << wsk[i]->Id << wsk[i]->Imie << wsk[i]->Nazwisko << endl;
	}
	
}

int sort(const void* w1, const void* w2) {

	const TOsoba* a = *(const TOsoba**)w1; // zutowanie 
	const TOsoba* b = *(const TOsoba**)w2;

	return a->Id - b->Id;
}

// Tablica wskaznikow do obiektu osoba
int main()
{
	TOsoba* wsk[10];
	wsk[0] = initOsoba(2, "Jan", "Kowalski");
	wsk[1] = initOsoba(1, "Piotr", "Nowak");
	qsort(wsk, 2, sizeof(TOsoba*), sort);
	showOsoba(wsk, 2);
	for (int i = 0; i < 2; i++){
		delete wsk[i];
	}
	system("pause");
}