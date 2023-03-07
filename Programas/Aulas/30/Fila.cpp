#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	queue <string> cartas;
	
	if(cartas.empty()){
		cout << "Sem cartas na fila\n\n";
	}else{
		cout << "Contem cartas na fila\n\n";
	}
	
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	
	cout << "Carta que esta no inicio da fila: " << cartas.front() << "\n";
	cout << "Carta que esta no fim da fila: " << cartas.back() << "\n\n";
	cout << "Tamanho da fila: " << cartas.size() << "\n";
	
	while(!cartas.empty()){
		cout << "Carta removida: " << cartas.front() << "\n";
		cartas.pop();
		if(cartas.empty()){
			cout << "Fim da fila...";
			break;
		}
		cout << "Nova carta no inicio: " << cartas.front() << "\n";
	}
	
	return 0;
}
