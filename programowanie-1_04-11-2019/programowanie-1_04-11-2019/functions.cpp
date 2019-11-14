#include <iostream>
#include "functions.h"
#include <conio.h> // Potrzebny do _kbhit() i _getch()

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
			if (tab[row][cell] <= 1) {
				tab[row][cell] = 0;
			}
		}
	}
}

void insertBlock(tBoard tab, tBlockTypes blockTypes, const int type, int rotation, int iRow, int& iColumn, int& newIColumn, const int l) {
	int canMove = iColumn == newIColumn ? 0 : 1; // Jezeli iColumn jest rowne newIColumn to nie ma potrzeby wykonywac sprawdzania
	int i = 0;
	while (canMove == 1 && i < l) {
		for (int n = 0; n < l; n++) {
			int bCell = blockTypes[type][rotation][i][n];
			int boardCell = tab[i + iRow][n + newIColumn];
			if (bCell != 0 && boardCell >= 5) {
				canMove = 0;
				newIColumn = iColumn;
				break;
			}
		}
		i++;
	}
	if (canMove == 1) {
		iColumn = newIColumn;
	}
	for (int i = 0; i < l; i++) {
		for (int n = 0; n < l; n++) {
			int bCell = blockTypes[type][rotation][i][n];
			if (bCell != 0) {
				tab[i + iRow][n + iColumn] = bCell;
			}
		}
	}
}

void keyInput(int& startColumn, int& rotation, const int l) {
	char input = ' ';
	// Sprawdzanie czy zostal wcisniety klawisz
	if (_kbhit()) {
		input = _getch(); // Wpisanie wcisnietego klawisza
	}
	// Przypisanie operacji klawiszy
	switch (input) {
	case 'a':
		if (startColumn > 0) startColumn--;
		break;
	case 's': 
		if (startColumn+l < colCount) startColumn++;
		break;
	case 'q':
		rotation > 0 ? rotation--: rotation = 3;
		break;
	case 'w':
		rotation < 3 ? rotation++ : rotation = 0;
		break;
	default:
		break;
	}
};