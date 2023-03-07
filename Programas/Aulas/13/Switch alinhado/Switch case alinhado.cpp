#include <iostream>
#include <cstdlib>//Ou <stdlib.io

using namespace std;

int main(){
	
	int val;
	
	cout << "Escolha um veiculo: \n";
	cout << "\n[1]Carro, [2]Moto, [3]Aviao, [4]Helicoptero\n";
	cin >> val;
	
	switch(val){
		case 1:
	    case 2:
		    cout << "\nTipo de transporte terrestre\n";
		    switch(val){
		    	case 1:
		    		cout << "\nCarro selecionado\n";
		    		break;
		    	case 2:
				    cout << "\nMoto selecionada\n";
					break;						
			}
			break;
			
		case 3:
		case 4:
		    cout << "\nTipo de transporte aereo\n";
			switch(val){
				case 3:
					cout << "\nAviao selecionado\n";
					break;
				case 4:
				    cout << "\nHelicoptero selecionado\n";
				    break;	 	
			}
			break;
			
		default:
		    cout << "\nVeiculo nao listado\n"; 		
	}
	
	cout << "\nPrograma finalizado\n";
	
	system("pause");
	
	return 0;
}
