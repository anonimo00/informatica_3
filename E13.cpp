/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 24/04/2017
programma= E13
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int V[10],P[10]; 	//ARRAY INPUT E NUMERI PARI
    int i,e;	//VARIABILI INDICE
    
    //input array
    for(i=0;i<10;i++){
    	do{
    		printf("inserisci il %d numero : ",i);
			scanf("%d",& V[i]);
		}while(V[i]<=0);
	}
	
	//VERIFICO I NUMERI PARI E L'INSERISCO SUL SECONDO ARRAY
	e=0;
    for(i=0;i<10;i++){
    	if(V[i]%2==0){
    		P[e]=V[i];
    		e++;
		}
	}
	
	//MOSTRO IN OUTPUT IL SECONDO ARRAY
	for(i=0;i<=e;i++){
    		printf("\nil numero di posizione %d e': %d",i,P[i]);
	}	
    
    printf("\n\n");
    system("pause");
}
