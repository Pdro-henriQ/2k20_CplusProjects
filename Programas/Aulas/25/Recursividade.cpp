#include <iostream>

using namespace std;

void contador(int num, int cont=0);

int main(){
	
	contador(10);
	
	return 0;
}

void contador(int num, int cont){
	cout << cont << "\n";
	if(num > cont){
		contador(num, ++cont);//E feito um pr� decremento pois se for realizado um pos o valor ja foi passado ent�o criara um loop na fun��o
	}
}
