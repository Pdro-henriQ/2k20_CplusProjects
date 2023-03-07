#include <iostream>

using namespace std;

void imp(string txt="Nothing here");//Emissão de um argumento padrão que caso a função quando for chamada n receba parametros este será executado

int main(){
	
	imp("Kalashknov");//Emissão de um argumento a partir da chamada da função
	
	return 0;
}

void imp(string txt){
	
	cout << "\n" << txt << "\n";
	
}
