#include <iostream>
using namespace std;

struct Opiskelija {
		string etunimi, sukunimi, opiskelijanum;
		int opintopisteet;
};

Opiskelija luoOpiskelija() {
    Opiskelija testi;
	cout << "Anna opiskelijan etunimi: ";
	cin >> testi.etunimi;
	cout << "Anna opiskelijan sukunimi: ";
	cin >> testi.sukunimi;
	cout << "Anna opiskelijan opiskelijanumero: ";
	cin >> testi.opiskelijanum;
	cout << "Anna opiskelijan opintopisteet: ";
	cin >> testi.opintopisteet;
	
	return testi;
}

int main() {
	const int OPISKELIJA_MAX = 20;
	Opiskelija opiskelijat[OPISKELIJA_MAX];
	int lukumaara;

	cout << "Kuinka monelle opiskelijalle luodaan tiedot? (MAX 20): ";
	cin >> lukumaara;
		
	for (int i = 0; i < lukumaara; i++) {
		opiskelijat[i] = luoOpiskelija();
	}

	for (int j = 0; j < lukumaara; j++) {
        cout << "Opiskelijan numero " << j + 1 << " tiedot.\n";
		cout << "Etunimi: " << opiskelijat[j].etunimi << endl;
		cout << "Sukunimi: " << opiskelijat[j].sukunimi << endl;
		cout << "Opiskelijanumero: " << opiskelijat[j].opiskelijanum << endl;
		cout << "Opintopisteet: " << opiskelijat[j].opintopisteet << endl;
	}
	
	return 0;
}