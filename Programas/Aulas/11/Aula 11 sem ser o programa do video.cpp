#include <iostream>

/*
Neste programa � utilizado as portas logicas para fazer opera��es de decis�o, assim como dar para fazer opera��es booleanas
as portas logicas podem ser usadas para certos tipos de problemas onde os dados podem ser verificados para ter uma precis�o
maior na resposta e ainda conseguir analisar com mais detalhes ao dar o resultado.
*/

using namespace std;

int main(){
	
	int dados,processos;
	
	cout << "\nDigite a quantidade de dados: ";
	cin >> dados;
	cout << "\nDigite o numero de processos: ";
	cin >> processos;
	
	if(dados >= processos && processos < 5){
		cout << "\nNao foi possivel processar os dados";
	}else if(dados >= processos && processos >=5){
		cout << "\nDados processados com sucesso";
	}
	
	processos = processos/5;
	
	if(processos < 5 && processos > 0){
		cout << "\nPoucos processos restantes";
	}else if(processos > 5 && processos <11){
		cout << "\nAinda restam processos para utililar mais uma vez";
	}else{
		cout << "\nNumero de processos para pelo menos mais 2 opera��es";
	}
	
	if(dados <= 1 && processos < 10 || dados > 10 && dados <16 || processos < dados && dados > 5){
		cout << "\n\nInacreditavel";
	}
	
	return 0;
}
