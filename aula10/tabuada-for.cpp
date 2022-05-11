#include <iostream>

using namespace std;

int main(){
	int tabuada;
	
	cout << "Informe a tabuada desejada: ";
	cin >> tabuada;
	
	for(int i = 0; i <= 10; i++){
		cout << tabuada << " X " << i << " = " << (tabuada * i) << endl;
	}

}
