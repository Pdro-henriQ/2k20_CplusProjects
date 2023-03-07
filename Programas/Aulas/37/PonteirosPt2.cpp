#include <iostream>

using namespace std;

int main(){
	
	int vetor[10];
	int *p;
	
	p=&vetor[0];// ou p=vetor ira atribuir a primeira posição do vetor
	
	*p=10;
	cout << vetor[0] << "\n";
	
	*(p++);
	*p=20;
	cout << vetor[1] << "\n";
	
	*(p++);
	*p=30;
	cout << vetor[2] << "\n";
	
	return 0;
}
