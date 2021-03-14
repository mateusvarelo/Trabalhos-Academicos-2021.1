#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 30
#define DIM 8
// Declaração de structs como tipos de forma funcional
typedef struct{   
     
    char nome[TAM],cpf[12];
} registro;

// *****************************************************

// Declaração de variaveis globais
registro reg[DIM];
main(){
	int i,n_Registro;
	n_Registro = 0; 
	for(i=0;i<3;i++){
	   printf("\nInforme seu nome:"); scanf(" %s",&reg[i].nome);
	   printf("\nInforme seu cpf:"); scanf(" %s",&reg[i].cpf); 
	   printf("\n-------------------");
	   n_Registro +=1;
    }
	for(i=3;i>=1;i--){
	  reg[i+1] = reg[i];	
	}
	strcpy(reg[1].nome, "Lucas");
	strcpy(reg[1].cpf, "1212");
	n_Registro +=1;
	for(i=0;i<4;i++){
	   printf("\nNome:%s",reg[i].nome);
	   printf("\nCpf:%s",reg[i].cpf);
	   printf("\n---------"); 
	   	
	}
	printf("\nTotal atualizado: %d",n_Registro);
}
