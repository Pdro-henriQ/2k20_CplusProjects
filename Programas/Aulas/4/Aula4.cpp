#include <iostream>

using namespace std;

//Aula sobre variaveis;

int main(){
	
	int inteiro=0;//10,25,12,44,444
	char letra='A';//'B' 'J' 'H'
	char letras[20];//Aceita ate 20 letras de texto pois a variavel se torna um vetor
	double decimal=4.44;//2,5 1,4 4,4 4,44
	float decimalFraco=4.4;//e um decimal que nem o double so que mais fraco exemplo: 2,49999999 no double vira 2,5 no float
	bool boleano=true;//recebi true=verdadeiro ou false=falso exemplo=1 e 0
	string texto="CAMELO ARGENTINO";//recebe texto exemplo= "CAMELO ARGENTINO"
	
	cout << "Digite um numero inteiro: ";
	cin >> inteiro;
	cout << "Digite uma letra: ";
	cin >> letra;
	cout << "Digite um numero decimal: ";
	cin >> decimal;
	cout << "Digite outro numero decimal: ";
	cin >> decimalFraco;
	cout << "Digite seu nome: ";
	cin >> texto;
	
	//voce pode d escrever tudo em um cout exemplo: cout << "\n" inteiro << "\n" letra << "\n"  decimal << "\n" decimalFraco << "\n" boleano << "\n" texto;
	
	cout << "\n" << inteiro << "\n";
	cout << letra << "\n";
	cout << decimal << "\n";
	cout << decimalFraco << "\n";
	cout << boleano << "\n";
	cout << texto << "\n";
	
	return 0;
}
