#include <iostream>
#include <cstdlib>//Ou <stdlib.io>

using namespace std;

int main(){
	
	int val;
	
	cout << "Selecione uma cor:\n";
	cout << "[1] Verde, [2] Azul, [3] Vermelho\n ";
	cin >> val;
	
	switch(val){
		case 1:
			cout << "\nCor selecionada: Verde\n";
			break;
		case 2:
		    cout << "\nCor selecionada: Azul\n";
		    break;
		case 3:
		  	cout << "\nCor selecionada: Vermelho\n";
			break;	
		default:
		    cout << "Opcao invalida\n\n";
			//break; Não é nescessrio colocar o break no default, assim como tambem não é nescessario colocar o default no comando caso não precise.	  	 
	}
	
	cout << "\nPrograma finalizado\n";
	
	system("pause");
	
	return 0;
}
