#include <iostream>
#include <cstdlib>//Ou <stdlib.io>

using namespace std;

int main(){
	
	int cont;
	
	cont=20;
	do{
		cout << "Kalashknov - " << cont << "\n";//Mesmo o cont sendo maior que 20 o do faz com que os comandos sejam executados pelo menos uma vez.
		cont++;
	}while(cont < 20);
	
	cout << "\nRotina finalizada\n";//Os loops tambem são chamados de rotinas.
	
	system("pause");
	
	return 0;
}
