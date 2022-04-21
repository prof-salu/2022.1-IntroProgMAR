#include <iostream>
using namespace std;

int main(){
	float num1, num2, resultado;
	char operacao; // + - * /
	
	cout << "Informe o valor01: ";
	cin >> num1;
	
	cout << "Informe o valor02: ";
	cin >> num2;
	
	cout << "Informe a operacao: ";
	cin >> operacao;
	
	switch(operacao){
		case '+':
			resultado = num1 + num2;
			break;
		case '-':
			resultado = num1 - num2;
			break;
		case '*':
			resultado = num1 * num2;
			break;
		case '/':
			if(num2 == 0){
				cout << "Nao e possivel dividir por zero" << endl;
				resultado = 0;
			}else{
				resultado = num1 / num2;	
			}
			
			break;
		default:
			cout << "Operacao invalida";
	}
	
	cout << "Resultado: " << resultado;
}
