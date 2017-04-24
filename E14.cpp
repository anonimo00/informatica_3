/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 24/04/2017
programma= E14
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int v[11];	//ARRAY PER LA RICERCA
    int n;	//NUMERO DA CERCARE NELL ARRAY
    int i; //INDICE
    
    //PRENDO I NUMERI PER L'ARRAY
    for(i=0;i<10;i++){
    	do{
    		printf("inserisci il %d numero :",i);
    		scanf("%d",& v[i]);
		}while((v[i]<=0) || (v[i]>1000));
	}
	
	//PRENDO IL NUMERO DA CERCARE E INSERISCO SULL'ARRAY LA SENTINELLA
	printf("inserire il numero da cercare: ");
	scanf("%d",& n);
	
	v[10]=n;
	
	//CICLO PER LA RICERCA
	i=0;
	while(v[i]!= n){
		i++;
	}
	
	//RIPRODUCO IN OUTPUT IL RISULTATO
	if(i<10){
		printf("\nil numero e' stato TROVATO nella posizione numero: %d",i);
	}else{
		printf("\nnumero non trovato....");
	}
    
    printf("\n\n");
    system("pause");
}
