#include <iostream>
#include <string>

using namespace std;

struct TPerson {
	string Name;
	int HealthLevel;
};

struct TPersonGroup {
	string Name;
	TPerson** Persons; // chcemy dwuwymairowoa, to **, jak 3D to ***
	int Pw, Pc; // prows, pcolumns
};

TPerson* initPerson(string name, int healthLevel) {
	TPerson* result = new TPerson();
	result->HealthLevel = healthLevel;
	result->Name = name;

	return result;
}
void CreateArray2DofPersons(TPerson *Persons[][10], int pw, int pc) {
	for (int i = 0; i < pw; i++) {
		for (int l = 0; l < pc; l++) {
			Persons[i][l] = initPerson("Jan", 100);
		}
	}
}

void DeleteArray2DofPersons(TPerson* Persons[][10], int pw, int pc) {
	for (int i = 0; i < pw; i++) {
		for (int l = 0; l < pc; l++){
			delete Persons[i][l];
		}
	}
}

TPersonGroup CreatePersonGroup(int pw, int pc) {
	TPersonGroup* result = new TPersonGroup();
	result->Pw = pw;
	result->Pc = pc;
	result->Persons = CreateArray2DofPersons(result->Persons, pw, pc);
}

int main()
{
	int pw = 5;
	int pc = 5;
	TPerson* Persons[10][10];
	CreateArray2DofPersons(Persons, pw, pc);
	
    std::cout << "Hello World!\n";
	cout << Persons[0][0]->Name;
	cout << Persons[0][1]->Name;
	DeleteArray2DofPersons(Persons, pw, pc);
	system("pause");
}
