/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 18/04/2017
programma= E11
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,i,k;
    
    //inserimento numero
	do{
		printf("inserisci un numero positivo maggioere di 0: ");
		scanf("%d",& n);
	}while((n<2) || (n>20));
	
	//costruzione e stampa del quadrato
	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
			printf("#");	
		}	
		printf("\n");
	}
    
    printf("\n\n");
    system("pause");
}
