// Tetris
// Jak zakodowac w pamieci?
// Plansza jako tablica 20 (wierszy) x 15 (kolumn)
// Wpisanie bloku do planszy

#include <iostream>

using namespace std;

const int rowCount = 20;
const int colCount = 15;
typedef int tBoard[rowCount][colCount]; // Plansza
typedef int tBlock[4][4]; // Blok testowy

void clearBoard(tBoard tab) {
	for (int row = 0; row < rowCount-1; row++) {
		for (int cell = 1; cell < colCount-1; cell++) {
			 tab[row][cell] = 0;
		}
	}
}
void showBoard(tBoard tab = {0}) {
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
// iRow - pierwszy wiersz, iColumn - pierwsza kolumna wprowadzanego pola, l - szerokosc bloku
void insertBlock(tBoard tab, tBlock block, int iRow, int iColumn, int l) {
	int y = iColumn;

	for (int blockRow = 0; blockRow < l; blockRow++) {
		for (int blockCell = 0; blockCell < l; blockCell++) {
			tab[iRow][y] = block[blockRow][blockCell];
			y++;
		}
		y = iColumn;
		iRow++;
	}
}

int main()
{
	tBoard tab = { 
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
		{10,10,10,10,10,10,10,10,10,10,10,10,10,10,10}
	};
	tBlock block = { 
		{1,1,1,1},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0} 
	};
	insertBlock(tab, block, 0, 1, 4);
	showBoard(tab);
	clearBoard(tab);
	system("pause");
}