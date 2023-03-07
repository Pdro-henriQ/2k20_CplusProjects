#include <iostream>
#include <stdlib.h>// <cstdlib>
#include <ctype.h>

using namespace std;

int main(){
	
	enum armas{revolver=6,fuzil=30,rifle=4,escopeta=8};
	armas ArmaAmmo;
	
	int aux;
	
	do{
	cout << "Digite o numero da arma que quer usar\n" << "[1]Revolver [2]Fuzil [3]Rifle [4]Escopeta: ";
    cin >> aux;
    switch(aux){
    	case 1:
    	    ArmaAmmo = revolver;
    	    break;
		case 2:
			ArmaAmmo = fuzil;
			break;
		case 3:
			ArmaAmmo = rifle;
			break;
		case 4:		
		    ArmaAmmo = escopeta;
		    break;
		default:
			system("cls");
		    aux = 0;    
	}
}while(aux < 1 || aux > 4);
	
	cout << "A municao desta arma e de: ";
	cout << ArmaAmmo;
	
	return 0;
}
