#include <iostream>

using namespace std;

struct Carro{
	string nome;
	string cor;
	int pot;
	int VelMax;
};

int main(){
	
	Carro car1;
	
	car1.nome = "Ventania";
	car1.cor = "Azul Turquesa";
	car1.pot = 300;
	car1.VelMax = 416;
	
	cout << "Nome:............. " << car1.nome << "\n";
	cout << "Cor:.............. " << car1.cor<< "\n";
	cout << "Potencia:......... " << car1.pot<< "\n";
	cout << "Maxima velocidade: " << car1.VelMax<< "\n";
				
	
	return 0;
}
