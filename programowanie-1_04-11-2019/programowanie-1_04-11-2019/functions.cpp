#include <iostream>
#include "functions.h"

using namespace std;

void showBoard(tBoard tab) {
	for (int row = 0; row < rowCount; row++) {
		for (int cell = 0; cell < colCount; cell++) {
			switch (tab[row][cell]) {
			case 0: cout << " "; break;
			case 1: cout << "1"; break;
			case 5: cout << "$"; break;
			case 10: cout << "#"; break;
			}
		}
		cout << endl;
	}
}

void clearBoard(tBoard tab) {
	for (int row = 0; row < rowCount - 1; row++) {
		for (int cell = 1; cell < colCount - 1; cell++) {
			tab[row][cell] = 0;
		}
	}
}

void insertBlock(tBoard tab, tBlockTypes blockTypes, const int type, int rotation, int iRow, int iColumn, const int l) {
	for (int i = 0; i < l; i++) {
		for (int n = 0; n < l; n++) {
			int bCell = blockTypes[type][rotation][i][n];
			if (bCell != 0) {
				tab[i + iRow][n + iColumn] = bCell;
			}
		}
	}
}