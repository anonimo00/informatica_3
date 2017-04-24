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
    int v[]={1,2,3,4,5,6,7,8,9,10,0};	//ARRAY PER LA RICERCA
    int n;	//NUMERO DA CERCARE NELL ARRAY
    int i; //INDICE
   
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
