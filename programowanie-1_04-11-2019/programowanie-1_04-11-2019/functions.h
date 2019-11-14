#pragma once
const int rowCount = 20;
const int colCount = 15;
const int tBlockLenght = 4;

typedef int tBoard[rowCount][colCount]; // Plansza
typedef int tBlockTypes[7][4][4][4];

void showBoard(tBoard tab);
void clearBoard(tBoard tab);

// tab - plansza
// blockTypes - lista wszystkich klockow
// type - rodzaj klocka
// rotation
// iRow/iColumn - punkt startu wpisywania do planszy
// l - dlugosc tablicy bloku
void insertBlock(tBoard tab, tBlockTypes blockTypes, const int type, int rotation, int iRow, int& iColumn, int& newIColumn, const int l = tBlockLenght);
// startColumn - pozycja gdzie wpisac klocek
// rotation
// l - dlugosc tablicy bloku
void keyInput(int &startColumn, int &rotation, const int l = tBlockLenght);