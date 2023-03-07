#include <iostream>
#include <cstdlib> //Tambem pode ser usada a biblioteca stdlib.io

using namespace std;

int main(){
	
	/*
	Criar um programa que meça 2 notas e diga se a situação e de aprovação, recuperação ou reprovação
	A media para ser aprovado e de 60 para cima
	Recupeção entre 40 e 59
	Reprovado menor que 40
	OBS: Usar o goto em vez de swich case ou qualquer ou laço
	*/
	
	inicio:
		
	system("cls");	
	
	int n1,n2,res;
	char opc;
	
	cout << "Digite o valor da nota 1: ";
	cin >> n1;
	cout << "Digite o valor da nota 2: ";
	cin >> n2;
	
	res=n1+n2;
	
	if(res >= 60){
		cout << "\nAluno Aprovado\n";
	}else if(res >=40){
		cout << "\nAluno em Recuperacao\n";
	}else{
		cout << "\nAluno Reprovado\n";
	}
	
	cout << "\nQuer verificar mais notas? [s/n]  ";
	cin >> opc;
	
	if(opc == 's' or opc == 'S'){
		goto inicio;
	}
	
	system("pause"); //Comando do ms-dos para pausar o programa
	
	return 0; 
}
