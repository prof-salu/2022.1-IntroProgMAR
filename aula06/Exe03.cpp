#include <iostream>
using namespace std;

int main(){
	int numero;
	
	cout << "Informe um numero: ";
	cin >> numero;
	
	if(numero < 0){
		cout << "Numero negativo: " << (numero * 3);
	}
	
	if(numero > 0){
		cout << "Numero positivo: " << (numero * 2);
	}
}
