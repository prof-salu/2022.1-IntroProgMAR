#include <iostream>
using namespace std;

int main(){
	int x = 5;
	int y = 10;
	int z = 3;
	
	cout << (x < y) << "\n";				//1
	cout << (x + z <= y) << "\n";			//1
	cout << (x > y - z) << "\n";			//0
	cout << (x + y + 2 == y) << "\n";		//1
	cout << (x != y-4) << "\n";				//1
	cout << (x * z >= y + 2) << "\n";		//1
	
	
	
	
	
	
}
