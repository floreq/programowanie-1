// Tetris
// Jak zakodowac w pamieci?
// Plansza jako tablica 20 (wierszy) x 15 (kolumn)
// Wpisanie bloku do planszy

#include <iostream>
#include "functions.h"
#include <stdlib.h>
#include <windows.h>

using namespace std;

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
	tBlockTypes blockTypes = {
		// block 0
		{
			// type 0
			{
				{0,0,1,0},
				{0,0,1,0},
				{0,1,1,0},
				{0,0,0,0},
			},
			// type 1
			{
				{0,0,0,0},
				{0,1,0,0},
				{0,1,1,1},
				{0,0,0,0},
			},
			// type 2
			{
				{0,0,0,0},
				{0,1,1,0},
				{0,1,0,0},
				{0,1,0,0},
			},
			// type 3
			{
				{0,0,0,0},
				{0,0,1,0},
				{1,1,1,0},
				{0,0,0,0},
			}
		},
		// block 1
		{
			{
				{0,1,0,0},
				{0,1,0,0},
				{0,1,1,0},
				{0,0,0,0},
			},
			{
				{0,0,0,0},
				{0,1,1,1},
				{0,1,0,0},
				{0,0,0,0},
			},
			{
				{0,0,0,0},
				{0,1,1,0},
				{0,0,1,0},
				{0,0,1,0},
			},
			{
				{0,0,0,0},
				{0,0,1,0},
				{1,1,1,0},
				{0,0,0,0},
			}
		},
	};
	for (int i = 0; i < 16; i++) {
		clearBoard(tab);
		insertBlock(tab, blockTypes, 1, 0, i, 1, 4);
		showBoard(tab);

		Sleep(1000);
		system("cls");
	}
	system("pause");
}