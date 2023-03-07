#include <iostream>

using namespace std;

struct Carro{
	string nome;
	string cor;
	int pot;
	int VelMax;
	int Vel;
	
	void insere(string stnome, string stcor, int stpot, int stVelMax){
		nome = stnome;
		cor = stcor;
		pot = stpot;
		VelMax = stVelMax;
	}
	
	void mostra(){
		cout << "\nNome:............. " << nome << "\n";
	    cout << "Cor:.............. " << cor<< "\n";
    	cout << "Potencia:......... " << pot<< "\n";
    	cout << "Velocidade atual.. " << Vel << "\n";
    	cout << "Maxima velocidade: " << VelMax<< "\n\n";
	}
	
	void mudaVel(int mv){
		Vel = mv;
		if(Vel > VelMax){
			Vel = VelMax;
		}
		if(Vel < 0){
			Vel = 0;
		}
	}
};

int main(){
	
	Carro car1;

	car1.insere("Ventania", "Azul Turquesa", 300, 416);
	car1.mudaVel(315);
	car1.mostra();
	
	return 0;
}
