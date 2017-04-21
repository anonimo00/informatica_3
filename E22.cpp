/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 18/04/2017 
programma= E22
versione= 1.oV
*******************/
int somma_n(int a,int b);
int prod_n(int a,int b);

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int a,b,s,p;
    
    //prendo in input a
    do{
    	printf("inserisci un numero:");
    	scanf("%d",& a);
	}while((a<0)||(a>1000));
	
	//prendo in input b
	do{
    	printf("inserisci un numero:");
    	scanf("%d",& b);
	}while((b<0)||(b>1000));
	
	//faccio la somma con un sottoprogramma
	s=somma_n(a,b);
	
	//faccio il prodotto con un sottoprogramma
	p=prod_n(a,b);
	
	//output somma
	printf("la somma e': %d",s);
	
	//output prodotto
	printf("\n\n il prodotto e' : %d",p);
	
    printf("\n\n");
    system("pause");
}

int somma_n(int a,int b){
	int s;
	
	//somma
	s=a+b;
	return s;
}

int prod_n(int a,int b){
	int p;
	
	//prodotto
	p=a*b;
	return p;
}
