#include <iostream>
#include <stdio.h> // fun��o para o gets
#include <stdlib.h> // Fun��o para o malloc

using namespace std;

int main(){
	
	char *vnome;
	vnome = (char *) malloc(sizeof(char)+1); // O +1 � um espa�o reserva para a aloca��o de memoria
	
	gets(vnome);
	
	cout << "\n\n" << vnome;
	
	return 0;
}
