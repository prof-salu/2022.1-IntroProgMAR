#include <iostream>

using namespace std;

int main(){
	// Criar um programa que capture 3 notas de 5 alunos. 
	// No final imprimir todas as notas
	
	float notas[5][3];
	
	float nota;
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 3; j++){
			cout << "[" << i << ", " << j << "]"<<" Informe a nota: ";
			cin >> nota;
			
			notas[i][j] =nota;
		}
	}
	
	cout << endl << endl;
	for(int i = 0; i < 5; i ++){
		cout << i+1 <<" - Notas: ";
		for(int j = 0; j < 3; j++){
			cout << notas[i][j] << " ";
		}
		cout << endl;
	}
	
}
