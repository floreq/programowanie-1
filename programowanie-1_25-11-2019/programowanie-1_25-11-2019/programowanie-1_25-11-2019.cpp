#include <iostream>
#include <ctype.h>
#include <math.h>

// Zad 2
char f1(char a) {
	return tolower(a);
}

// Zad 3
void f2(double a[], double b[], double x[], int n) {
	for (int i = 3; i < n - 1; i++) {
		double sum = 0;
		for (int j = i; j <= n - 1; j++) {
			sum = a[i + 1] * pow(x[j], 1 / 11.0);
		}
		b[i] = sum / 2 * n;
	}
}

// Zad 4
void f3(double tab2D[10][10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (tab2D[i][j] == 1) {
				tab2D[i][j] = 0;
			}
		}
	}
}

// Zad 5
void f4(double tab2D[10][10]) {
	int row = -1;
	int col = -1;
	double max = abs(tab2D[0][0]);

	for (int i = 0; i < 10; i++) {
		int j;
		for (j = 0; j < 10; j++) {
			if (max < abs(tab2D[i][j])) {
				max = abs(tab2D[i][j]);
				row = i;
				col = j;
			}

		}
	}
}

int main()
{
	const int calkowita = 22;
	const double zmiennoprzecinkowa = 4.4;
	double tab2D[10][10] = {
		{3,6,4},
		{3,3,2},
		{4,5,3}
	};
	int tab3D[10][10][10];
	double tab1D[10] = { 13,5.25,1.2,8,0.5 };
	f3(tab2D);
}
