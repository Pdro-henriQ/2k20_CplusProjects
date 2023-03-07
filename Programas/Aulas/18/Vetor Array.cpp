#include <iostream>
#include <cstdlib>//Ou <stdlib.io>

using namespace std;

int main(){
	
	int tam=5;//Pode se usar uma variavel para definir o tamanho do vetor assim agilizando o processo.
	int vetor[tam]={10,20,30,40,50};//Pode se inserir valores dentro do vetor ao cria-lo como demonstrado ao lado
	int i;
	
	for(i=0; i<tam; i++){//Tambem da para usar um laço for para inserir valores no vetor, assim como imprimilos
		cout << vetor[i] << "\n";
	}
	
	cout << "\n";
	
	for(i=0; i<sizeof(vetor)/sizeof(vetor[0]); i++){//Pode se usar a função sizeof que retorna o tamanho do vetor em bytes e dividilo pelo tipo de variavel em bytes: int=4bytes
		cout << vetor[i] << "\n";    //Como o vetor contem 5 espaços então tem 20 bytes logo a formula fica: sizeof(vetor)/4
	}                                //E mais seguro usar: sizeof(vetor)/sizeof(vetor[0]) pois cada SO tem seu tamanho de bytes
	
	cout << "\nFim do programa\n";
	
	return 0;
}
