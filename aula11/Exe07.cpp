#include <iostream>
using namespace std;

int main(){
	//7. Fa�a um programa que receba um n�mero e que calcule e 
	//   mostre a tabuada desse n�mero.
	
	int numero;
	
	cout << "Informe um numero: ";
	cin >> numero;
	
	for(int i = 1; i <= 10; i++){
		cout << i << " X " << numero << " = " << (i * numero) << endl;
	}
}
