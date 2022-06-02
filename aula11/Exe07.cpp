#include <iostream>
using namespace std;

int main(){
	//7. Faça um programa que receba um número e que calcule e 
	//   mostre a tabuada desse número.
	
	int numero;
	
	cout << "Informe um numero: ";
	cin >> numero;
	
	for(int i = 1; i <= 10; i++){
		cout << i << " X " << numero << " = " << (i * numero) << endl;
	}
}
