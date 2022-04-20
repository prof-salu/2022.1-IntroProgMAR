#include <iostream>
#include <math.h>
#include <iomanip> //importando a biblioteca setprecision

using namespace std;

int main(){
	//int ==> numeros inteiros (sem casa decimal)
	//float ==> numeros reais (com casa decimal)
	
	float n1, n2, n3, media;
	
	cout << "Informe a N1: ";
	cin >> n1;
	
	cout << "Informe a N2: ";
	cin >> n2;
	
	cout << "Informe a N3: ";
	cin >> n3;
	
	media = (n1 + n2 + n3)/3;
	
	cout << "Media final: " << media << endl;
	cout << "Media final: " << setprecision(2) << media << endl;
	cout << "Media final: " << round(media) << endl;
	cout << "Media final: " << floor(media) << endl;
	cout << "Media final: " << ceil(media) << endl;
	
	if(media >= 0 && media < 5){
		cout << "Conceito: Insuficiente";
	}else if(media >= 5 && media < 7){
		cout << "Conceito: Recuperacao";
	}else if(media >= 7 && media < 9){
		cout << "Conceito: Bom";
	}else if(media >= 9 && media < 10){
		cout << "Conceito: Muito bom";
	}
}
