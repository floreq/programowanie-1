#define _USE_MATH_DEFINES // Wlaczenie pi, musi byc na gorze
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	// Zad 1. Stworzyæ talice double o rozmiarze 10 i wypisac jej elementy
	//double t[10] = { 1, 2, 3 };
	//for (int i = 0; i < 10; i++) {
	//	cout << t[i] << endl;
	//}

	// Zad 2. Dodanie kolejnych wartosci do tablicy
	//double t1[10];
	//for (int i = 0; i < 10; i++) {
	//	t1[i] = i;
	//	cout << t1[i] << endl;
	//}

	// Zad3. Wpisanie wartosci sin() 0-90 stopni co 10 stopni. Sin dziala na radianach
	// Zad4. Jak (i) jest pazyste do cos, a jak nieparzyste to sin
	// Zad5. Jak (i) podzielne jest przez 3 to tg, a jak przez 4 to ctg
	double t2[12];
	double katWRadianach, katWStopniach = 0;
	for (int i = 0; i < 12; i++, katWStopniach +=10) {
		double katWRadianach = katWStopniach * M_PI / 180;
		// if (i%2) wynik 0 - falsz, wszystko inne prawda
		if (i % 4 == 0 ) {
			t2[i] = 1/tan(katWRadianach);
		} else if (i % 3 == 0) {
			t2[i] = tan(katWRadianach);
		} else if (i % 2 == 0) {
			t2[i] = cos(katWRadianach);	
		} else {
			t2[i] = sin(katWRadianach);
		}
		cout << t2[i] << endl;
	}
	system("pause");
	return 0;
}