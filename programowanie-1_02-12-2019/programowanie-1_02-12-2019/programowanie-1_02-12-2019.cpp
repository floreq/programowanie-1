#include <iostream>

using namespace std;

// Zad 1. Zliczenie znakow w str za pomoca notacji wskaznikowej
int strLength(char* str) {
	int i = 0;
	while (*(str + i) != '\0') {
		i++;
	}
	return i;
}

// Zad 2. Kopiowanie ciagu znakow do strNew
void strCopy(char* str, char* strNew) {
	// Musi byc <= poniewaz ostatni znak w str to znak '\0'
	for (int i = 0; i <= strLength(str); i++) {
		*(strNew + i) = *(str + i);
	}
}

// Zad 3. Kopiowanie odwrotnie (od tylu) ciagu znakow do strNew
void rStrCopy(char* str, char* strNew) {
	for (int i = strLength(str) - 1; i >= 0; i--) {
		*strNew++ = *(str + i);
	}
	*strNew++ = '\0';

	// lub
	//while (*(strNew + i) = *(str + i)) {
	//	i++;
	//}
	// lub
	//while (*strNew++ = *str++);
}

// Zad 4. Polaczenie str z strNew
void strConect(char* str, char* strNew) {
	int i = strLength(strNew);
	while (*str != '\0') {
		*(strNew + i) = *str++;
		i++;
	}
	*(strNew + i) = '\0';

	// lub
	//while (*strNew++);
	//strNew--;
	//while (*strNew++ = *str++);
	// lub
	//while (*++strNew);
	//while (*strNew++ = *str++);
}

// Zad 5. Zamien abcdef na badcfe
void strSwitch(char* strAbc) {
	while (*strAbc != '\0') {
		int temp = *strAbc;
		*strAbc = *(strAbc + 1);
		*strAbc++;
		*strAbc = temp;
		*strAbc++;
	}
	*strAbc++ = '\0';
}

int main()
{
	char str[] = "Ala ma kota";
	char strNew[80];
	char strAbc[] = "abcdef";
	//cout << strLenght(str);
	strCopy(str, strNew);
	//rStrCopy(str, strNew);
	strConect(str, strNew);
	cout << strNew;
	//strSwitch(strAbc);
	//cout << strAbc;

	system("pause");
}