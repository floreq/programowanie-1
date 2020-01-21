#include <iostream>

typedef void (*WSKF)(double, double, int);
typedef char(*Wsktab)[5];
typedef void f1(int, int[4][4]);
typedef f1* Tabwsk[];
typedef struct TKomputer {
	char Producent[150];
	char Typ[150];
	int Czestotliwosc;
};

void zad2(TKomputer* k, const char producent[150], const char typ[150], int czestotliwosc) {
	TKomputer* r = k;
	strcpy_s(r->Producent, producent);
	strcpy_s(r->Typ, typ);
	r->Czestotliwosc = czestotliwosc;

}

void zad3(int n, double a[], double b[], double x[], double y[], double z[], double (*f)(double, double, double)) {
	for (int i = 0; i <= n - 1; i++) {
		double sum = 0;
		for (int j = 0; j <= n; j++) {
			sum = sum + b[j];
		}
		a[i] = f(x[i], y[i], z[i]) / (n * sum);
	}
}

typedef double (*f4)(double);
void zad4(int n, double** U, double x[], f4 f[], f4 g[]) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int a = f[i](x[j]);
			int b = f[j](x[i]) * g[i](x[j]);
			U[i][j] = a / b;
		}
	}
}

void zad5(char* str) {
	int s = strlen(str);
	for (int i = 0; i < s; i++) {
		char tmp = *(str + i);
		if (isupper(tmp) == 0) {
			int asci = int(tmp) - 32; // -32 zmienia na duza litere
			*(str + i) = char(asci);
		}
	}
}

int main()
{
	WSKF a1;
	Wsktab a2;
	Tabwsk* a3;

	TKomputer* komputer = new TKomputer();
	zad2(komputer, "Producent", "Typ", 12);
}