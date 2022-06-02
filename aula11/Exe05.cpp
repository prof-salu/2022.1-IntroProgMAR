#include <iostream>
using namespace std;

int main(){
	
	//5. Faça um programa em que o usuário digite 2 valores e 
	//   se a soma deles for maior que 15
	//   o programa encerra, caso contrário, repete.
	
	int num1, num2;
	
	do{
		cout << "Informe o numero 1: ";
		cin >> num1;
		
		cout << "Informe o numero 2: ";
		cin >> num2;
		
		cout << "Soma: " << (num1 + num2) << endl;
	}while(num1 + num2 <= 15);
}
