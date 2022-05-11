#include <iostream>

using namespace std;

int main(){
	int idade;
	int somaIdade = 0;
	int media;
	int qtdEntrevistados;
	
	cout << "Informe o total de entrevistados: ";
	cin >> qtdEntrevistados;
	//7
	for(int i = 1; i <= qtdEntrevistados; i++){
		cout << "[ " << i <<" ] Informe a sua idade:";
		cin >> idade;
		somaIdade = somaIdade + idade;
	}
	
	media = somaIdade / qtdEntrevistados;
	
	cout << "Media de idade: " << media;
}
