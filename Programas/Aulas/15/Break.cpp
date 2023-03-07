#include <iostream>
#include <cstdlib>//Ou <stdlib.io>

using namespace std;

int main(){
	
	int cont;
	
	cont=0;
	
	while(cont < 1000){
		cout << cont << "\n";
		cont++;
		if(cont == 500){
			break;//Este é o uso do camando break interromper loops.
		}
	}
	
	return 0;
}
