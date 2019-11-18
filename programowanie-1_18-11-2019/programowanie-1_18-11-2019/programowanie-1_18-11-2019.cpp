#include <iostream>
#include <cmath>

using namespace std;

// Jak pisze wygeneruj, znajdz i to ma zpisac w miejsce wywolania, zwrocic, a nie cout << x << endl (chyba, za karze);
// Zad 2. Napisz funkcje ktora liczy
double funkcja(double x, double a, double b, double c, double d) {
	return a * pow(x, 1 / 11.0) + b * pow(x, 1 / 3.0) + c * pow(x, 1 / 7.0) + d; // .0 jest potrzebne, operacje musza byc wykonane na zmiennoprzecinkowyc
}
// Zad 3. Napisz funkcje, ktora generuje elementy wektora
void funkcja1(double a[], double b[], double x[], int n) {
	for (int i = 0; i < n; i++) {
		double sum = 0;
		for (int j = i; j <= n; j++) {
			sum = sum + a[j] * a[i];
		}
		b[i] = sum / n;
	}
}
// Zad 4. Napisac funkcje do zerowanie wszystkich komorek w tablicy 3D, odniesienie do tab3D
void funkcja2(double tab3D[10][10][10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				tab3D[i][j][k] = 0;
			}
		}
	}
}
// Zad 5. Napisac funkcje znajdujaca w tablicy 2D znajdzie pierwszy wiersz, w ktorym szystkie elementy sa rowne 0
// Sprawdzanie kolumny lub wiearza lub obu (do obu trzeba dodac dodatkowe parametry)
int funkcja3(double tab2D[10][10]) {
	for (int i = 0; i < 10; i++) {
		int j;
		for (j = 0; j < 10; j++) {
			if (tab2D[i][j] != 0) break;
		}
		if (j == 10) return i;
	}
	return -1; // Nie ma w tablicy indeksu -1
}

int main() {
	// Zad 1. Zdefiniowanie zmiennych/stalych
	const char znak = 35;
	const float zmiennoprzecinkowa = 4.4; // dobule - tez moze byc
	double tablica[10][10] = { {4,6,8}, {3,5,2}, {1,5,1} };
	int tab3D[10][10][10] = { 0 };
	float tab1D[10] = { 3, 5.5, 5.3, 8, 0.5 };
}
