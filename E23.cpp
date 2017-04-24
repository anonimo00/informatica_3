/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 24/04/2017
programma= E23
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int c;	//VARIABILE FLAG
    int cont,i,x;	//VARIABILI CONTATORI
    char parola[100];	//STRINGA PAROLA
    
    //PRENDO IN INPUT LA STRINGA
    printf("inserire una parola: ");
    scanf("%s", parola);
    
    //CICLO PER VERIFICARE LA LUNGHEZZA DELLA PAROLA
    cont=0;
    while(parola[cont]!= '\0'){
    	cont++;
	}
	
	//VERIFICA SE LA PAROLA è PALINDROMA
	x=cont/2;
	i=0;
	c=1;
	while((i<x)&&(c==1)){
		if(parola[cont-1]!= parola[i]){
			c=0;
		}
		i++;
		cont--;
	}
	
	//STAMPO I RISULTATI
	if(c==1){
		printf("\n\nil nome e' palindromo...");
	}else{
		printf("\n\nil nome non e' palindromo...");
	}
    
    printf("\n\n");
    system("pause");
}
