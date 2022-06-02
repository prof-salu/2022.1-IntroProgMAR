#include <iostream>

using namespace std;

int main(){
	//2. Ler 5 números e informar quantos desses eram ímpares.
	int numero;
	int contaImpar = 0;						//1, 6, 3, 7, 8
	int impar[5];
	
	for(int i = 0; i < 5; i++){
		cout << "Informe o numero: ";
		cin >> numero;
		
		if(numero % 2 != 0){
			//impar
			
			impar[contaImpar] = numero;
			contaImpar++;
		}
	}
	
	cout << "Total de numeros impares: " << contaImpar << endl;
	
	for(int j = 0; j < contaImpar; j++){
		cout << impar[j] << endl;
	}
	

}
