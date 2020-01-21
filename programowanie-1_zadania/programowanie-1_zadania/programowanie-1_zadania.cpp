#include <iostream>
using namespace std;

// Zad 1.
float tab[7];
float tabA[10] = { 1,2,3,4,5,6,7,8,9,10 };
float tabB[10];
int tabAi[10];

void insertToTab(float tab[7], int n) {
	float* wsk = tab;
	int l = 5;
	for (int i = 0; i < n; i++, l++) {
		*(wsk + i) = l;
	}
}
void copyFromTableToTable(float tabA[], float tabB[]) {
	float* wsk = tabA;
	for (int i = 0; i < 10; i++) {
		tabB[i] = *(wsk + i);
	}
}
void insertToTabAi(int tabAi[]) {
	int* wsk = tabAi;
	int* wsk1 = tabAi + 9;
	for (int i = 0; i < 5; i++) {
		*(wsk + i) = i - 10;
		*(wsk1 - i) = (10 - i) - 10;
	}
}


int main()
{
	insertToTab(tab, 7);
	copyFromTableToTable(tabA, tabB);
	insertToTabAi(tabAi);

	system("pause");
}
