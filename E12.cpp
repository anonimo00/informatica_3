/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 18/04/2017
programma= E12
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i,v[10];
    
    //caricamento array
    for(i=0;i<10;i++){
    	do{
    		printf("inserisci un numero positivo non troppo grande :");
    		scanf("%d",& v[i]);
		}while((v[i]<0) || (v[i]>100));
	}
    
    //stampa inversa dell array
    printf("i numeri sono:\n\n");
    for(i=9;i>=0;i--){
    	printf("\n %d",v[i]);
	}
	
    printf("\n\n");
    system("pause");
}
