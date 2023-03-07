#include <iostream>
#include <stack>// Para trabalhar com pilha inclui-se a biblioteca stack

using namespace std;

int main(){
	
	stack <string> cartas;
	
	if(cartas.empty()){
		cout << "Sem cartas na pilha\n\n";
	}else{
		cout << "Contem cartas na pilha\n\n";
	}
	
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	
	if(cartas.empty()){
		cout << "Sem cartas na pilha\n\n";
	}else{
		cout << "Contem cartas na pilha\n\n";
	}
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	cout << "Carta no topo: " << cartas.top() << "\n\n";
	
	while(!cartas.empty()){
		cout << "Carta retirada: " << cartas.top() << "\n";
		cartas.pop();
		if(cartas.empty()){
			cout << "Fim da pilha...";
			break;
		}
		cout << "Carta que esta no topo: " << cartas.top() << "\n\n";
	}
	
	return 0;
}
