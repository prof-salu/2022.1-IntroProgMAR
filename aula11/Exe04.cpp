#include <iostream>
using namespace std;

int main(){
	//4. Ler 5 numeros e informar o menor e o maior.
	
	int numero;
	int menor;
	int maior;
	
	for (int i = 0; i < 5; i++){
		cout << "Informe um numero: ";
		cin >> numero;
		
		if(i == 0){
			menor = numero;
			maior = numero;
		}
		
		if(numero < menor){
			menor = numero;
		}
		
		if(numero > maior){
			maior = numero;
		}
	}

	cout << "Menor: " << menor << endl;
	cout << "Maior: " << maior << endl;
}
