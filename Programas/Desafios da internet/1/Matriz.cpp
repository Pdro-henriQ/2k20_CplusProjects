#include <iostream>
#include <cstdlib> //Ou <stdlib.io>

using namespace std;

/*O preenchimento da matriz sera feito por linha, apos uma linha ser preenchida a outra será e assim por diante

00 01
10 11

*/
int main(){

  int matriz[2][2];/*Para inciar a matriz com numeros basta colocar: matriz[2][2] = {{1,2}, ou matriz[2][2] = {1,2,3,4};
                                                                                     {3,4}};
                   */
  int aux=0;
  
  for(int a = 0; a < 2; ++a){
  	for(int b = 0; b < 2; ++b){
  		cout << "Digite um numero: ";
  		cin >> matriz[a][b];
	  }
  }
  
  cout << "\n";
  
  for(int a = 0; a < 2; ++a){
  	for(int b = 0; b < 2; ++b){
  		cout << matriz[a][b] << " ";
	  }
	  cout << "\n";
  }
  for(int a = 0; a < 2; ++a){
  	for(int b = 0; b < 2; ++b){ 
  		if(matriz[a][b] > aux){
  			aux = matriz[a][b];
		  }
	  }
  }
  
  cout << "\n" << aux << "\n";
  aux = matriz[0][0];
  
  for(int a = 0; a < 2; ++a){
  	for(int b = 1; b < 2; ++b){
  		if(matriz[a][b] < aux){
  			aux = matriz[a][b];
		  }
	  }
  }
  
  cout << aux << "\n";
  
  system("pause");

 return 0;
}
