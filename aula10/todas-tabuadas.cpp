#include <iostream>

using namespace std;

int main(){
	for(int a = 1; a <= 10; a--){
		for (int z = 0; z <= 10; z++){
			cout << a << " x " << z << " = " << (a * z) << endl;
		}
		
		cout << "\n";
	}

}
