#include <iostream>

using namespace std;

int main(){
	int idade1;
	int idade2;
	int idade3;
	int media;
	
	cout << "Informe a sua idade:";
	cin >> idade1;
	
	cout << "Informe a sua idade:";
	cin >> idade2;
	
	cout << "Informe a sua idade:";
	cin >> idade3;
	
	media = (idade1 + idade2 + idade3) / 3;
	
	cout << "Media de idade: " << media;
}
