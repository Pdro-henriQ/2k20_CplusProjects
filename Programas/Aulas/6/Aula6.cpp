#include <iostream>

using namespace std;

int n1,n2; //Variáveis Globais, podem ser acessadas de qualquer local do programas

int main(){
	
	//Operadores matematico: +(soma), -(Subrtração), /(Divisão), *(Multiplicação), %(Resto de uma divisão), () parenteses que indica oque sera feito primeiro
	
	int n3,n4; //Variáveis Locais, so podem ser acessadas na função(escopo) onde estão inseridas
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
    
	//Pode criar qualquer tipo de calculo a partir dessas definicões

    return 0;
}
