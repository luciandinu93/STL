#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Persoana {
public:
    Persoana() {}
	Persoana(const string& nume, const int& varsta) : nume(nume), varsta(varsta) {};
	int getVarsta() { return this->varsta;}
	string getNume() {return this->nume;}
	bool operator< (Persoana alta) const {
		return this->varsta < alta.getVarsta();
	}
private:
	string nume;
	int varsta;
};

void printPersoana(Persoana& p) {
	cout << "[" << p.getNume() << ", " << p.getVarsta() << "]; ";
}

int main() {
	vector<Persoana> persoane = {Persoana("Mihai", 24),
								 Persoana("Doina", 35),
								 Persoana("Radu", 10),
								 Persoana("Elena", 20),
								 Persoana("Cosmin", 10)
								};

	vector<Persoana> persoane1(persoane.size());
	vector<Persoana> persoane2(persoane.size());
    copy(persoane.begin(), persoane.end(), persoane1.begin());
    copy(persoane.begin(), persoane.end(), persoane2.begin());

	cout << "\nPersoane initiale: ";
	for_each(persoane.begin(), persoane.end(), printPersoana);
	cout << endl;

	cout << "\nSortare persoane dupa varsta (sort): ";
	sort(persoane1.begin(), persoane1.end());
	for_each(persoane1.begin(), persoane1.end(), printPersoana);
	cout << endl;

    cout << "\nSortare persoana dupa varsta (stable_sort): ";
	stable_sort(persoane2.begin(), persoane2.end());
	for_each(persoane2.begin(), persoane2.end(), printPersoana);
	cout << endl;
}
