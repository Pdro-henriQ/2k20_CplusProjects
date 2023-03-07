#include <iostream>

using namespace std;

main(){
	
	int n1,n2;
	
	n1=0;
	n2=10;
	
	cout << n1 << "\n\n";
	
	cout << n2 << "\n\n";
	
	cout << "\n\n"; 
	//n1=n1+1; formato grande para incrementar ou decrementar um valor
	//n1+=1; forma resumida de incremento e decremento. Da para fazer outras operações tambem como por exemplo: n1*=2(Multiplicação), n1%=2(Resto da divisão), n1/=2(Divisão)
	//n1++; Acrescenta 1 ao valor pode ser soma(++) ou subtração(--), existe o pos e o pre icremeneto diferenciando a partir do ++: n1++(pos), ++n1(pre)
	
	cout << n1++ << "\n\n";// pos incremento, primeiro utiliza a variavel depois icrementa
	
	cout << ++n2 << "\n\n";// pre incremento, primeiro incrementa depóis utiliza a variavel
	
	cout << "\n\n"; 
	
	cout << n1 << "\n\n" << n2;
	
	return 0;
}
