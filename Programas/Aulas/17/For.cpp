#include <iostream>
#include <cstdlib>//Ou <stdlib.io>

using namespace std;

int main(){
	
	int x, y, z;
	
    for(x=0, y=1, z=0; x<=10 && z<=6; x++, y+=2, z+=2){
    	cout << x << " - ";
    	cout << y << " - ";
    	cout << z << "\n";
	}
	
	cout << "\nFim da rotina\n";
	
	for(int tmp = 0; tmp <1000000000; tmp++);//for sem corpo serve como uma pausa de tempo.
	
	//system("pause");  A pausa e feita pelo comando for sem corpo.
	
	return 0;
}
