#include <iostream>

using namespace std;

int main(){
	
	short a, b;
	cout << "podaj a ";
	cin >> a;
	cout << "podaj b ";
	cin >> b;
	
	//instrukcja wawrunkowa
	if(a > b){ // jezeli warunek sie spelni to wykona to co jest w klamrach
	cout << "a jest wieksze od b";
	}
	else if(a == b){
		cout << "a jest rowne b";
	
	
	}	
	else{
	cout << "b jest wieksze od a";
	} // jak warunek sie nie spelni to stanie sie to)



system("pause");
}