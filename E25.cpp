/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 02/09/2017
programma= E25
versione= 1.oV
*******************/
int n_primo(int n);

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n;	//numero da inserire
    int primo;	//variabile per la verifica del numero primo
    
    //input numero
    do{
    	printf("\ninserisci un numero: ");
    	scanf("%d",& n);
	}while(n<2);
    
    primo=n_primo(n);
    
    //verifica numero primo
    if(primo==1){
    	printf("Il numero e' primo... ");
	}else{
		printf("Il numero non e' primo...");
	}
    printf("\n\n");
    system("pause");
}

int n_primo(int n){
	int x; //varibile contatore
	int primo; //variabile per la verifica del numero primo
	
	//assegnazioni
	primo=1;
	x=2;
	
	//ciclo per la verifica del numero
	while((x!=n/2)&&(primo==1)){
		if(n%x==0){
			primo=0;
		}
		x++;
	}
	return primo;
}
