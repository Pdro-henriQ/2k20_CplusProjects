#include <iostream>

using namespace std;

void imp(string txt="Nothing here");//Emiss�o de um argumento padr�o que caso a fun��o quando for chamada n receba parametros este ser� executado

int main(){
	
	imp("Kalashknov");//Emiss�o de um argumento a partir da chamada da fun��o
	
	return 0;
}

void imp(string txt){
	
	cout << "\n" << txt << "\n";
	
}
