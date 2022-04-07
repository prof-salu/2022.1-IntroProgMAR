#include <iostream>
using namespace std;

int main(){
	//Verificar se um numero é par ou impar
	
	int numero;
	
	cout << "Informe um numero: ";
	cin >> numero;
	
	if(numero % 2 == 0){
		cout << "Numero par!" << "\n";
		cout << "Fim do IF" << "\n";
	}else{
		cout << "Numero impar" << "\n";
		cout << "Fim do ELSE" << "\n";
	}
	
	cout << "Fim do programa" << "\n";
}
	

