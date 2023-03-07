#include <iostream>
#include <cstdlib>//Ou <stdlib.io>

using namespace std;

	//for(test=ctl1; test<ctl2; test++){
		//cout << test << " ";
	//}
		
   	/*for(test=1; test<num+1; test++){
	    cout << test << " ";
    }*/

int main(){
	
	int num, ptd, aux;
	int ctl1, ctl2, ctl3 ,cont;
	
	
    do{
	
	system("cls");
	
	cout << "Digite o numero maximo da piramide [IMPAR]: ";
    cin >> num;
    cout << "\n";
    
    aux = num;
	
	while(aux > 2){ //Divisão por dois ate que o resultado seja 0 ou 1
		aux = aux%2;
	}
	//Teste que verifica se o numero é impar ou par
    if(aux == 0){
    	cout << "\nO numero digitado foi par: " << num << "\nNumero invalido\n";
	}else{
		cont = ((num+1)/2);//Operação que define o numero central
		
		ctl1 = 1;
	    ctl2 = num+1;
	    ctl3 = 1;
		
		while(ctl1 != cont+1){
		 for(ptd=ctl1; ptd<ctl2; ptd++){
		  cout << ptd << " ";
	     }
	     
	    ctl1 = ctl1+1;
	    ctl2 = ctl2-1;
	    cout << "\n";
	    
	     for(ctl3 = 1; ctl3 != ctl1; ctl3++){
	    	cout << "  ";
		 }
    	}
	}
	
	cout << "\n\n" << "Voce quer testar outro numero ?: " << "[1]sim [0]nao  ";
	cin >> aux;
	
	
   }while( aux != 0);
	
	cout << "\n\n" << "Numero central: " << cont;
	
	return 0;
}
