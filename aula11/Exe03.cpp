#include <iostream>
using namespace std;

int main(){
	//3. Ler a idade de 10 pessoas e imprimir quantas são maiores 
	// de idade.
	
	//Exibir a idade mais nova e mais velha
	int idade;
	int contaIdade;
	int maisNovo;
	int maisVelho;
	
	for (int i = 0; i < 10; i++){
		cout << "[" << (i+1) << "] Informe a sua idade: ";
		cin >> idade;
		
		if(idade >= 18){
			contaIdade++;
		}
		
		if(i == 0){
			maisNovo = idade;
			maisVelho = idade;
		}
		
		if(idade < maisNovo){
			maisNovo = idade;
		}
		
		if(idade > maisVelho){
			maisVelho = idade;
		}
	}
	
	cout << "Total: " << contaIdade << endl;
	cout << "Mais novo: " << maisNovo << endl;
	cout << "Mais velho: " << maisVelho << endl;
}
