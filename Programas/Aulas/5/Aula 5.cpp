#include <iostream>

//tambem e possivel colocar constantes que são valores que não tem auteração ao longo do programa
//Para colocar uma constante e nescessario escrever #define nome_da_constante valor_que_substituira_ela veja os exemplos abaixo
 
#define Orbs 1000
#define cabrito cout << "CABRITOS VOADORES"

using namespace std;

int main(){
	
	/*int numero;
	int batatas;
	int salamandras;
	Em vez de fazer dessa forma e possivel declarar as variaveis em uma linha do modo descrito abaixo*/
	
	int numero, batatas, salamandras;
	/*tambem e possivel inicializar-las com um valor basta colocar um = e um valor do lado do nome da variavel exemplo:
	int numero=4, batatas=20 , salamandras=0; 
	basta colocar de acordo com o tipo de dado que a variavel armazena*/
	
	//Para chamar uma constante basta escrever o nome dado a elas, lembrando que este nome não pode ser igual a palvras reservadas pelo sistema
	cout << Orbs << "\n\n";
	//Se for colocado o ponto e virgula apenas sera mostrado o Cabrito, mas como não ha ponto e virgula em cabrito e possivel continuar a escrita depois de chamar a constante
	cabrito << "\n\n";
	
	const string CEBOLA="cebolinha de cebola";/*Tambem e possivel criar constantes dessa forma, e diferente de usar o define esse tipo de criação permite acessar
	                                                a alocação da constante podendo ter outras utilidades*/
	                                          //para criar essa constante basta: const tipo(sendo inteiro,decimal,texto etc) nome = valor;      
	                                                
	cout << CEBOLA << "\n\n"; //Aqui eu chamo a constante CEBOLA para mostrar-la na tela do computador                                               
	
	return 0;
}
