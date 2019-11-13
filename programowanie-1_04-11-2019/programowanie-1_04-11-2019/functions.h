#pragma once
const int rowCount = 20;
const int colCount = 15;

typedef int tBoard[rowCount][colCount]; // Plansza
typedef int tBlockTypes[7][4][4][4];

void showBoard(tBoard tab);
void clearBoard(tBoard tab);

// type - rodzaj klocka
// iRow/iColumn - punkt startu wpisywania do planszy
// l - dlugosc tablicy bloku
void insertBlock(tBoard tab, tBlockTypes blockTypes, const int type, int rotation, int iRow, int iColumn, const int l);
void keyInput();