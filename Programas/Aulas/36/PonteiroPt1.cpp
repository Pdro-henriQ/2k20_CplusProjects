#include <iostream>

using namespace std;

int main(){
	
	string veiculo="Batata";
	string *pont;
	
	pont=&veiculo;
	
	cout << pont << "\n" << &veiculo << "\n";
	
	*pont="Moto";
	
	cout << *pont << "\n" << veiculo << "\n";
	
	return 0;
}
