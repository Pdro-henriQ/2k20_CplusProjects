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
	
	Carro *carros=new Carro[5];
	
	Carro car1,car2,car3,car4,car5;
	
	carros[0]=car1;
	carros[1]=car2;
	carros[2]=car3;
	carros[3]=car4;
	carros[4]=car5;
	
	carros[0].insere("Ventania", "Azul Turquesa", 300, 416);
	carros[1].insere("Bradosva", "Amarelo", 260, 185);
	carros[2].insere("Iantcha", "Branco", 220, 180);
	carros[3].insere("Aazitot", "Vermelho vinho", 298, 315);
	carros[4].insere("Macab", "Preto", 400, 420);
	
	carros[0].mudaVel(360);
	carros[1].mudaVel(182);
	carros[2].mudaVel(295);
	carros[3].mudaVel(284);
	carros[4].mudaVel(365);
	
	for(int i=0; i<5; i++){
		carros[i].mostra();
	}
	
	return 0;
}
