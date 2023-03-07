#include <iostream>
#include <cstdlib>//Ou <stdlib.io>

using namespace std;

int main (){
	
	int cont;
	
	cont=0;
	
	while(cont++<20){
		cout << "Kalashknov - " << cont << "\n";
		if(cont == 10){
			break;//Se o if tiver so 1 comando não precisa usar as chaves.
		} 
		//Pode se incrementar no programa como por exemplo: cont+=2;(Acrescenta de 2 eem 2)
	}
	
	cout << "\nFim do programa\n";
	
	system("pause");
	
	return 0;
}
