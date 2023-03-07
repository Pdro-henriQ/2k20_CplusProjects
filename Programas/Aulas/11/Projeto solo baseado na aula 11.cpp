#include <iostream>

using namespace std;

int main(){

    /*
    Criar um programa usando expressões booleanas e portas logicas
    
    Quebra de escudo MAGICO onde dano fisico atravessa o escudo
    */
	    
    int escudo,Dan,DC;
    char tipo;
    bool dec,confirm;
        
    escudo = 475;
	
	cout << "\nDigite o dano que sua habilidade causou: ";
	cin >> Dan;
	cout << "\nDigite o tipo de dano causado(Magico[m],Fisico[f]): ";
	cin >> tipo;
	
	if(tipo == 'm' || tipo == 'M'){
		dec = true;
	}else if(tipo == 'f' || tipo == 'F'){
		dec = false;
	}else{
		cout << "\n\nTipo de dano nao encontrado\n";
		confirm = true;
	}
	
	if(!confirm){
		if(dec){
			DC = escudo-Dan;
			if(DC<0){
				cout << "\nO escudo foi quebrado e o alvo recebeu " << -DC << " de dano"; 
			}else{
				cout << "\nO escudo foi reduzido para: " << DC; 
			}
		}else{
			cout << "\n\nO dano causado foi diretamente no alvo pois o escudo era magico: " << Dan;
		}
	}else{
		cout << "\n\nNao foi possivel calcular\n";
	}
	
        
  return 0;
}
