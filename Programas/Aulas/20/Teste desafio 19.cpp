#include <iostream>

using namespace std;

int main(){
	
	//97 a 122
	//65 a 90
	
	string letra;
	char ab;
	char test;
	int vef;
	int num;
	bool avaliado;
	
	cout << "Digite uma palavra: ";
	cin >> letra;
	
	vef=0;
	while(letra[vef] != 0){
      vef++;
	}
	
    for(int cont = 0; cont<vef; cont++){
    	if(letra[cont] >= 65 && letra[cont] < 91 || letra[cont] >= 97 && letra[cont] < 123){//Estes numeros são a representação do alfabeto no teclado 
    		cout << "NUMERO DETECTADO\n";
		}else{
			cout << "Falha na execução\n";
		}
	}

	avaliado = false;
	
	cout << "Digite um numero: ";
	cin >> num;
	
	ab = 65;
	
	if(num == char(test)){
		cout << "Digite um numero: ";	
	}else{
		avaliado = true;
	}
	
	cout << "\n" << avaliado;
	
	return 0;
}
