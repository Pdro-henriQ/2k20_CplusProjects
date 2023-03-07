#include <iostream>
#include <cstdlib>//Ou <stdlib.io>

using namespace std;

int main(){
	
	int n1,n2,nota;
	string res;
	
	cout << "Digite a primeira nota: ";
	cin >> n1;
	cout << "Digite a segunda nota: ";
	cin >> n2;
	
	nota=n1+n2;
	
	(nota >= 60) ? res="Aprovado": res="Reprovado";/*Operador ternario: É um if simplificado e serve para ser usado em operações simples
	                                                pois melhora o desempenho do programa e tbm a facilidade de entendimento.
	                                               */
	cout << "\nSituacao do aluno: " << res << "\n";
	
	system("pause");
	
	return 0;
}
