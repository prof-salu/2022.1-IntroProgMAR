#include <iostream>
using namespace std;

int main(){
	//6. Ler N n�meros e contar quantos s�o pares. 
	//   O programa deve parar quando ler um m�ltiplo de 11.
	
	int numero;
	int contaPar = 0;
	
	while(true){
		cout << "Informe um numero: ";
		cin >> numero;
		
		if(numero % 2 == 0){
			contaPar++;
		}
		
		if(numero % 15 == 0){
			continue;
		}
		cout << "nao e multiplo de 15" << endl;
		if(numero % 11 == 0){
			cout << "Fim";
			break;
		}
	}
	
	cout << "Total de numeros PARES: " << contaPar;
}
