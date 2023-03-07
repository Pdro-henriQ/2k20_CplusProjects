#include <iostream>
#include <cstdlib> //Ou <stdlib.io>

/*
 As notas vão de 0 a 10 então para o aluno passar com nota 10 ele tera que tirar 10 em todas as notas.
*/

using namespace std;

int main(){
	
    float n1, n2, n3, MA, ME;
    int opcao;
    
    do{
    	
    	system("cls");
    	
    	cout << "Digite a primeira nota do aluno: ";
    	cin >> n1;
    	cout << "\n";
    	cout << "Digite a segunda nota do aluno: ";
    	cin >> n2;
    	cout << "\n";
    	cout << "Digite a terceira nota do aluno: ";
        cin >> n3;
        cout << "\n";
		cout << "Informe qual a media de exercicios do aluno [ME]: ";
		cin >> ME;
		cout << "\n";
		
		MA = (n1+(n2*2)+(n3*3)+ME)/7; 
		
		if(MA >= 9){
			cout << "\nNota: A\n" << "Media do aluno: " << MA << "\n";
		}else if(MA >= 7.5){
			cout << "\nNota: B\n" << "Media do aluno: " << MA << "\n";
		}else if(MA >= 6){
			cout << "\nNota: C\n" << "Media do aluno: " << MA << "\n";
		}else if(MA >= 4){
			cout << "\nNota: D\n" << "Media do aluno: " << MA << "\n";
		}else if(MA < 4){
			cout << "\nNota: E\n" << "Media do aluno: " << MA << "\n";
		}
		
		cout << "\nDeseja digitar mais notas, pressione qualquer tecla \n" << "Se deseja parar pressione [0]: ";
		cin >> opcao;
		
		   	
	}while(opcao !=0);
	
	return 0; 
}
