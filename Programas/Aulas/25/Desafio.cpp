#include <iostream>
#include <stdlib.h>//Ou <cstdlib>
#include <ctype.h>

using namespace std;

void Fator(int fac, int end);
void Fibo(int big , int bang , int celeste, int fim);

int main(){
	
	int resp;
	int num;
	int aux;
	
	cout << "Digite [1] para fatorial e [2] para fibonacci: ";
	cin >> resp;
	cout << "\n";
	
	if(resp == 1){
		cout << "Digite um numero: ";
    	cin >> num;
    	cout << "\n\n";
		Fator(num, num);
	}else if(resp == 2){
		cout << "\n\n";
		cout << "Quantos valores deverao ser mostrados ?: ";
		cin >> aux;
		Fibo(0,1,0, aux) ;
	} 
	
	return 0;
}

void Fator(int fac, int end){
	cout << fac * --end << " ";
	if(end > 0){
		Fator(fac, end);
	}
}

void Fibo(int big, int bang, int celeste, int fim){
		big = big + celeste;
	    bang = big + bang;
    	cout << big  << " "<< bang << " ";
    	celeste = bang;
    	
    	if(--fim == 0){
    		
		}

    	if(bang < 11){
    		Fibo(big, bang,celeste, --fim);
    	}
    	
    	system("pause");
}
