/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 24/04/2017
programma= E18
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int v[10];	//ARRAY DA INVERTIRE
    int i;		//VARIABILE INDICE
    int a,x;    //VARIABILI PER CONVERTIRE L'ARRAY
    
    //CARICO L'ARRAY
    for(i=0;i<10;i++){
    	do{
    		printf("inserisci il %d numero: ",i);
    		scanf("%d",& v[i]);
		}while((v[i]<0) || (v[i]>1000));
	}
	
	//CICLO PER INVERTIRE L'ARRAY
	x=0;
	for(i=9;i>x;i--){
		a=v[i];
		v[i]=v[x];
		v[x]=a;
		x++;
	}
	
	//STAMPO ARRAY
	for(i=0;i<10;i++){
		printf("\nil numero %d e': %d",i,v[i]);
	}
    
    printf("\n\n");
    system("pause");
}
