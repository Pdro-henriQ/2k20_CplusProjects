#include <iostream>

using namespace std;

int n1,n2; //Vari�veis Globais, podem ser acessadas de qualquer local do programas

int main(){
	
	//Operadores matematico: +(soma), -(Subrtra��o), /(Divis�o), *(Multiplica��o), %(Resto de uma divis�o), () parenteses que indica oque sera feito primeiro
	
	int n3,n4; //Vari�veis Locais, so podem ser acessadas na fun��o(escopo) onde est�o inseridas
	int res1,res2; //Vai ajudar a guardar resultados
	
	n1=4;
	n2=8;
	n3=9;
	n4=11;
	
    res1=n1+n2+n3+n4;
    
    cout << "A soma de todas as variaveis e: " << res1 << "\n\n";
    
    res1=(n1+n2)-(n3+n4);
    
    cout << "A subtracao de n1+n2 por n3+n4 e: " << res1 << "\n\n";
    
    res1=n4/n2;
    
    cout << "A divisao de n4 por n2 e: " << res1 << "\n\n";
    
    res1=(n3+n2)/n4;
    res2=(n3+n2)%n4;
    
    cout << "A divisao de n3+n2 por n4 e: " << res1 << "\n" << "E o resto e: " << res2 << "\n\n";
    
    res1=(n2*n4)/(n3*n1);
    
    cout << "A divisao de n2*n4 por n3*n1 e :" << res1 << "\n\n";
    
	//Pode criar qualquer tipo de calculo a partir dessas definic�es

    return 0;
}
