#include <iostream>
using namespace std;

int main(){
	
	//5. Fa�a um programa em que o usu�rio digite 2 valores e 
	//   se a soma deles for maior que 15
	//   o programa encerra, caso contr�rio, repete.
	
	int num1, num2;
	
	do{
		cout << "Informe o numero 1: ";
		cin >> num1;
		
		cout << "Informe o numero 2: ";
		cin >> num2;
		
		cout << "Soma: " << (num1 + num2) << endl;
	}while(num1 + num2 <= 15);
}
