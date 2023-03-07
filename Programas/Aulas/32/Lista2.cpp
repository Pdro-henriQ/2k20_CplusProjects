#include <iostream>
#include <list>

using namespace std;

int main(){
	
	list<int> contagem;
	
	int tam;
	
	tam=10;
	
	for(int i=0; i<tam;i++){
		contagem.push_front(i);
	}
	
	tam = contagem.size();
	for(int i=0; i<tam;i++){
		cout << contagem.front() << "\n";
		contagem.pop_front();
	}
	
	return 0;
}
