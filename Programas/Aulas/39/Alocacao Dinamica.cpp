#include <iostream>
#include <stdio.h> // função para o gets
#include <stdlib.h> // Função para o malloc

using namespace std;

int main(){
	
	char *vnome;
	vnome = (char *) malloc(sizeof(char)+1); // O +1 é um espaço reserva para a alocação de memoria
	
	gets(vnome);
	
	cout << "\n\n" << vnome;
	
	return 0;
}
