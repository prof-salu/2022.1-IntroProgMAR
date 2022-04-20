#include <iostream>
#include <math.h>
using namespace std;

int main(){
	float peso, altura, imc;
	
	cout << "Informe o seu peso: ";
	cin >> peso;
	
	cout << "Informe a sua altura: ";
	cin >> altura;
	
	//imc = peso / (altura * altura);
	imc = peso / pow(altura, 2);
	
	cout << "IMC = " << imc << endl;
	
	if(imc < 18.5){
		cout << "Abaixo do peso";
	}else if(imc >= 18.5 && imc < 25){
		cout << "Peso normal";
	}else if(imc >= 25 && imc < 30){
		cout << "Sobrepeso";
	}else if(imc >= 30 && imc < 35){
		cout << "Obesidade grau I";
	}else if(imc >= 35 && imc < 40){
		cout << "Obesidade grau II";
	}else if(imc >= 40){
		cout << "Obesidade grau III";
	}
}
