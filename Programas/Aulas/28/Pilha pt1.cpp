#include <iostream>
#include <stack>// Para trabalhar com pilha inclui-se a biblioteca stack

using namespace std;

int main(){
	
	stack <string> cartas;
	
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	cout << "Carta no topo: " << cartas.top() << "\n";
	
	cartas.pop();
	cartas.pop();
	
	cout << "\n\nTamanho da pilha apos retirar 2 cartas: " << cartas.size() << "\n";
	cout << "Carta no topo: " << cartas.top() << "\n";
	
	return 0;
}
