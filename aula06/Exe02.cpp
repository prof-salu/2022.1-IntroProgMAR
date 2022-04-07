#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	
	cout << "Informe A: ";
	cin >> a;
	
	cout << "Informe B: ";
	cin >> b;
	
	if( a == b){
		c = a + b;
	}else{
		c = a * b;
	}
	
	cout << "Valor C: " << c;
	
}
