/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 24/04/2017
programma= E19
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char nome[100];	//STRINGA
    int c,i;		//VARIABILI INDICI
    
    //CARICO LA STRINGA
    printf("inserisci il tuo nome : ");
    scanf("%s",nome);
    
    //CICLO PER IL CALCOLO DELLA LUNGHEZZA
    c=0;
    while(nome[c]!= '\0'){
    	c++;
	}
    printf("\n\nla lunghezza del nome e' : %d\n\n",c);
    
    //CICLO PER LA STAMPA DEL NOME AL CONTRARIO
    for(i=c-1;i>=0;i--){
    	printf("%c",nome[i]);
	}
    
    printf("\n\n");
    system("pause");
}
