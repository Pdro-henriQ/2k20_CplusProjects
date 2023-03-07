#include <iostream>
#include <stdlib.h>//Ou <cstdlib>
#include <ctype.h>

using namespace std;

void texto();//Apresentando a função, nescessario caso a função seja feita apos o main(Programa principal).
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main(){
	
	int res;
	string transp[4]={"Carro","Moto","Helicoptero","Aviao"};
	
	soma(17,13);
	res = soma2(280,20);
	
	cout << "O valor de res e: " << res << "\n";
	
	tr(transp);
	
	texto();
	
	return 0;
}

void texto(){//Função sem parametros. do tipo vazio.
	cout << "\nKalashknov\n";
}

void soma(int n1, int n2){//Função com parametros. do tipo vazio.
	cout << "A soma dos valores e: " << n1+n2 << "\n";
}

int soma2(int n1, int n2){//Função com parametros. do tipo inteiro que tem como retorno a soma de duas variaveis.
	return n1+n2;
}

void tr(string tra[4]){//Função com parametros. do tipo vazio.
	for(int cont=0; cont<4 ; cont++){
		cout << tra[cont] << "\n";
	}
}
