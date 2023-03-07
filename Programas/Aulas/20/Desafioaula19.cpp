#include <iostream>
#include <cstdlib>//Ou <stdlib.h>
#include <ctype.h>

using namespace std;

int main(){
	
	//Declaração de variaveis
	char palavra[50];
	char forcado[50];
	int palha[50];
	char forca;
	string letra;
	string dica;
    bool veracidade, confiabilidade;
	int tentativas, vef, proxI, proxF, auxFP, auxFP2, itl, win;
	
	//Começo do programa
    do{
    	system("cls");
    	
    	proxI = 0;
    	proxF = 0;
    	win = 0;
    	
    	do{
    		veracidade = 0;
    		
    		cout << "Digite uma palavra sem espaco: ";
	        cin >> letra;
	        
          	//Inicio da função que verifica quantos caracteres tem a palavra digitada
	        vef=0;
	        while(letra[vef] != 0){
		      vef++;
	        }
	        //Inicio da função que verifica quantos caracteres tem a palavra digitada
	        
	        //Função que verifica se tem numeros digitados na palavra
			for(int cont = 0; cont<vef; cont++){
    	      if(letra[cont] >= 65 && letra[cont] < 91 || letra[cont] >= 97 && letra[cont] < 123){//Estes numeros são a representação do alfabeto no teclado 
    		    veracidade = false;
	    	  }else{
		        veracidade = true;
	          }
        	}
	        //Fim da função 
	        
	        //Pos teste que usa o resuldado da Função que verifica se tem numeros digitados na palavra
	        if(veracidade == false){
	          //cout << "\n" << vef << "\n";
	
         	  /*Inicio da função que imprime a palavra digitada
         	  for(int cont = 0; cont<vef ; cont++){
   	    	  cout << letra[cont];
         	  }
        	  //Fim da função*/
        	
    		  //Inicio da função que envia a palavra para o vetor palavra e guarda a posição de inicio de talvez uma nova palavra
    	 	  proxF = proxF + vef;
    	 	  if(proxF <= 50){
    			for(proxI, auxFP = 0 ; proxI<proxF ; proxI++, auxFP++){
    	        palavra[proxI] = letra[auxFP];
    	        }
    	        palavra[proxF] = ' ';
                proxI =  proxF + 1;
                proxF++;
			  }else{
				cout << "\nEspaco cheio\n";
				proxF = 50;
				itl = proxF - 1;
				auxFP2 = 0;
				break;
		 	  }
    	    
              cout << "\nEssa palavra e composta ? Exe: (Pao de queijo)\n" << "Se sim digite qualquer numero para continuar senao digite [0] para sair: ";
              cin >> auxFP2;
              cout << "\n\n";
              //Fim da função
            
              if(auxFP2 == 0){
            	itl = proxF - 1;
			  }else{
			  	win++;
			  }	
			}else{
				auxFP2 = 1;
			}
            
		}while(auxFP2 != 0);
		
		system("cls");
		
		//Começo da preparação do jogo da forca
		do{
			tentativas = 1;
			
			cout << "Escreva uma dica da palavra(Apenas uma palavra): ";
			cin >> dica;
			
			//Inicio da função que verifica quantos caracteres tem a palavra digitada
			vef=0;
	        while(dica[vef] != 0){
		      vef++;
	        }
	        //Fim da função
	        
	        //Função que verifica se tem apenas letras na palavra digitada
	        for(int cont = 0; cont<vef; cont++){
    	      if(dica[cont] >= 65 && dica[cont] < 91 || dica[cont] >= 97 && dica[cont] < 123){//Estes numeros são a representação do alfabeto no teclado 
    		    veracidade = false;
	    	  }else{
		        veracidade = true;
	          }
        	}
        	//Fim da função
	        
	        if(veracidade == false){
	        	
	        	cout << "\n\nInsira o numero de tentativas: ";
	        	cin >> tentativas;
	        	
				//Começo do jogo da forca
				do{
					system("cls");
					
					vef=0;
	                while(dica[vef] != 0){
		                vef++;
	                }
	                
	                cout << "A dica e: ";
	                for(int cont=0; cont<vef; cont++){
	                	cout << dica[cont];
					}
					
					for(int cont=0; cont<50; cont++){
						forcado[cont] = 0;
					}
					
					do{
					    cout << "\n" << "Voce tem " << tentativas << " tentativas";
					    cout << "\n\nDigite uma letra :";
			    		cin >> forca;
					
				    	if(forca >= 65 && forca < 91 || forca >= 97 && forca < 123){
	        	 	        for(int cont=0; cont<proxF-1; cont++){
	        		         	if(forca == palavra[cont] || toupper(forca) == palavra[cont]){
	        		         		if(forca == forcado[cont] || toupper(forca) == forcado[cont]){
	        		         			cout << forca;
									 }else{
									 	cout << forca;
									 	forcado[cont] = forca;
	        		    	    	    win++;
									 }
					    	    }else if(forcado[cont] >= 65 && forcado[cont] < 91 || forcado[cont] >= 97 && forcado[cont] < 123){
					    	    	cout << forcado[cont];
						        }else{
						        	cout << "_";
								}
					        }  	
					    }else{
						    tentativas++;
					    }
					    if(win >= proxF-1){
					    	system ("cls");
					    	cout << "Voce venceu\n\n";
					    	cout << "A palavra era: ";
					    	for(int cont=0; cont<win; cont++){
					    		if(forcado[cont] >= 65 && forcado[cont] < 91 || forcado[cont] >= 97 && forcado[cont] < 123){
					    			cout << forcado[cont];
								}else{
									cout << " ";
								}
							}
					    	tentativas = 1;
						}
					
					    tentativas--;
					}while(tentativas !=0 || tentativas < 0);
					//Fim do jogo da forca
					
					tentativas = 0;
				}while(tentativas !=0);
	
	        	tentativas = 0;
			}else{
				tentativas = 1;
				cout << "\n\nA dica tem que ser uma palavra!\n\n";
			}
			//cin >> tentativas;
			
		}while(tentativas !=0);
		//Fim do jogo da forca
	    
		if(win < proxF-1){
			cout << "\n\n" << "A palavra era: ";
			for(int cont = 0; cont<itl ; cont++){
    		cout << palavra[cont];
    	    } 
		}
  	
    	/*Inicio da função que imprime o vetor palavra
    	for(int cont = 0; cont<itl ; cont++){
    		cout << palavra[cont];
    	}
    	//Fim da funcção*/
    	
    	cout << "\n";
	    /*
    	cout << "\nTentativas: ";
    	cin >> tentativas;
    	*/
	
    }while (tentativas != 0);	
    //Fim do programa
	
	//cout << "\n" << veracidade;
	
	return 0;
}
