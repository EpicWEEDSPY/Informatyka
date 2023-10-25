#include <iostream>
 
using namespace std;
 
int main (){
 	// deklaracja zminnych
 	short zmienna = 2;
 	float zmianaprzecinkowa = 3.21;
 	string tekst = "tekst";
 	char znak = 'A';
 	bool logiczny = false;
 	
	cout << "a";
	cout << endl;
	cout << "wszystko wina przemka";
	cout << endl; // koniec lini
	cout << "liczba" << zmienna; //wyswiewtlanie zmiennych
	
	string wyraz;
	cout << endl;
	cout << "Podaj jakis wyraz ";
	cin >> wyraz;
	cout << "Podales wyraz " << wyraz;
	
	//imie
	string imie;
	float wiek;
	cout << "podaj imie ";
	cin >> imie;	
	cout << endl;
	cout << "poidaj wiekj ";
	cin >> wiek;
	cout << "masz na imie " << imie << " i masz " << wiek << " lat";
	return 0;
}
