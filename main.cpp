#include <cstdlib>
#include <iostream>

// Criação dos Tipos Abstratos de Dados TElemento & TPilha

// Estrutura TElemento:
typedef struct tipoElemento
               { int elemento; 
                          }TElemento;

// Estrutura TPilha:        
typedef struct tipoPilha
               { TElemento pilhaElemento[5];
                 int topoPilha;
                         }TPilha;

// Função Criar Pilha:               
void criarPilha(TPilha *pPilha)
{
     pPilha->topoPilha = -1;
     printf("\n -> Pilha Criada c/Sucesso!!!\n\n");     
}

// Função Inserir Elemento:                          
void inserirElemento(TPilha *pPilha)
{    
     if(pPilha->topoPilha < 4)
         { pPilha->topoPilha++;
           printf ( "\n -> Digite um Numero: ");
           scanf("%d", &pPilha->pilhaElemento[pPilha->topoPilha].elemento);
           printf("\n");                                                           
         }
     else
         { printf("\n -> Pilha Cheia!!!\n\n");
           }                          
}

// Função Excluir Elemento:                          
void excluirElemento(TPilha *pPilha) 
{
     if(pPilha->topoPilha >= 0)
         { pPilha->topoPilha--;
           printf("\n -> Elemento Excluido da Pilha!!!\n\n");
         }
    else 
         { printf("\n -> Pilha Vazia!!!\n\n");
           }                       
}

// Função Mostrar Elementos:
void mostrarPilha(TPilha *pPilha) 
{    
     if(pPilha->topoPilha == -1)
         { printf("\n -> Pilha Vazia!!!\n");
           }
     else
         {
           printf("\n-> Conteudo da Pilha:\n\n");     
           for( int i = pPilha->topoPilha; i >= 0; i--)
              { printf("   Posicao: ");
                printf("%d",i);     
                printf("   Elemento: ");
                printf("%d\n",pPilha->pilhaElemento[i].elemento); 
              }
           }
     printf("\n");
}

using namespace std;

int main(int argc, char *argv[])
{   
    // Declaração de Variáveis: 
    TPilha pilha;    
    int opcao;
        
        // Menu Principal do Programa: 
        do {
        	 cout << "==============================\n";
        	 cout << "   Estrutura de Dados Pilha   \n";
        	 cout << "==============================\n";
        	 cout << " [ 01 ] - Criar Pilha         \n";
        	 cout << " [ 02 ] - Inserir Elemento    \n";
        	 cout << " [ 03 ] - Excluir Elemento    \n";    
        	 cout << " [ 04 ] - Mostrar Pilha       \n";    
        	 cout << " [ 05 ] - Sair                \n";    
        	 cout << "==============================\n";
        	 cout << " Informe Opcao: ";
        	 cin >> opcao;
        	 cout << "==============================\n\n";

	        // Validação - Menu Principal:
    	    if(opcao < 1  ||  opcao > 5){
		        	
        		system("CLS");
        		printf("\n -> Opcao Invalida!!!\n\n");
        	}
        
        	// Operações - Fila Estática: 
			switch(opcao){
    
                      		case 1 : {  system("CLS");
                            	      	criarPilha(&pilha);
                                	  	break;
                                   		 } 
                                   
                      		case 2 : {  system("CLS");
                                	  	inserirElemento(&pilha);
                                  		break;
                                   		 } 
                      
                      		case 3 : {  system("CLS");
                            	      	excluirElemento(&pilha);
                                	  	break;
                                   		 } 
                      
                      		case 4 : {  system("CLS");
                            	      	mostrarPilha(&pilha);
                                	  	break;
                                  		 }
                      }
    	} while(opcao!=5);

    system("PAUSE");
    return EXIT_SUCCESS;
}
