#include "functions.h"
#include <iostream>

using namespace std;

// f1
void displayArray(double tab[nn], int n) {
	for (int i = 0; i < n; i++) {
		cout << tab[i] << endl;
	}
};
// f2
void displayArray(double tab[][nn], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int a = 0; a < m; a++) {
			cout << tab[i][a] << " ";
		}	
		cout << endl;
	}
}
// f3
void clearArray(double tab[nn], int n) {
	for (int i = 0; i < n; i++) {
		tab[i] = 0;
	}
}
// f4
void clearArray(double tab[][nn], int n, int m) {
	// W funkcji sizeof(tab) / sizeof(double) nie zadziala.
	for (int i = 0; i < n; i++) {
		for (int a = 0; a < m; a++) {
			tab[i][a] = 0;
		}
	}
}