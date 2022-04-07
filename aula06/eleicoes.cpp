#include <iostream>
using namespace std;

int main(){
	int idade;
	
	cout << "Informe a sua idade: ";
	cin >> idade;
	//E &&
	//OU ||
	//NÃO !
	
	if(idade >= 16 && idade < 18 || idade >= 65){
		cout << "Voto opcional";
	}
	
	if(idade >= 18 && idade < 65){
		cout << "Voto obrigatorio";
	}
	
	if(idade < 16){
		cout << "Nao pode votar";
	}
}
