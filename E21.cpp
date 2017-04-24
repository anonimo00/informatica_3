/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 24/04/2017 
programma= E21
versione= 1.oV
*******************/
int input_n();
int ver(int x,int y);

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int x,y;	//VARIABILI DEI NUMERI PRESI IN INPUT
    int max;	//VARIABILE DEL NUMERO MAGGIORE
    
	//PRENDO I DUE NUMERI
	x=input_n();
	y=input_n();
	
	//VERIFICO IL MAGGIORE
	max=ver(x,y);
	
	//STAMPO IL RISULTATO
	printf("\n\nil numero maggiore e': %d",max);
	
    printf("\n\n");
    system("pause");
}

int input_n(){
	int n;		//VARIABILE NUMERO IN INPUT
	
	//PRENDO IL NUMERO IN INPUT
	do{
		printf("inserisci un numero da 0 a 100: ");
		scanf("%d",& n);
	}while((n<0) || (n>100));
	return n;
}

int ver(int a,int b){
	int c;		//VARIABILE PER IL NUMERO MAGGIORE
	
	//VERIFICO IL MAGGIORE TRA I DUE
	if(a>b){
		c=a;
	}else{
		c=b;
	}
	return c;
}
