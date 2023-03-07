#include <iostream>
#include <stdlib.h> //ou <cstdlib>
#include <ctype.h>

int fatorial(int fator);
int fibonacci(int obj);

using std::cout;
using std::cin;

int main(){
	
	int real;
	int fatorializado;
	
	cout << "Digite um valor para se calcular o fatorial do mesmo : ";
	cin >> real;
	
	cout << "\n\n";
	
	fatorializado = fatorial(real);
	cout << "O resultado foi : " << fatorializado;
	
	cout << "\nDigite quantos numeros da sequencia de fibonacci voce quer ver: ";
	cin >> real;
	for(int cont = 0; cont < real; cont++){
		cout << fibonacci(cont+1) << " ";
	}
	
	return 0;
}

int fatorial(int fator){
	if(fator == 0){
		cout << "\n";
		return 1;
	}
	cout << fator << " ";
	return fator * fatorial(fator-1); // 4 * 3(R1) * 2(R2) * 1(R3) * 1(R4)
}

int fibonacci(int obj){
	if(obj == 1 || obj == 2){
		return 1;
	}else{
		return fibonacci(obj-1)+fibonacci(obj-2);// (fibonacci - 1 = 5) + (fibonacci - 2 = 3) 
	}
}
