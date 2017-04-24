/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 24/04/2014
programma= E24
versione= 1.oV
*******************/
int fattoriale(int x);

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int x;	//VARIABILE NUMERO
    int f;	//VARIABILE FATTORIALE DEL NUMERO PRESO IN INPUT
    int scelta; 	//VARIABILE SCELTA PER RIPETERE IL PROGRAMMA
    
    //PROGRAMMA FATTORIALE
    do{
    	//PRENDO IN INPUT UN NUMERO
    	printf("inserisci un numero:");
    	scanf("%d",& x);
    	
    	//CALCOLO FATTORIALE
    	f=fattoriale(x);
    	
    	//STAMPO I RISULTATI
    	printf("\n\n il fattoriale di %d e': %d",x,f);
    	
    	//PRENDO IN INPUT LA SCELTA DELL'UTENTE
    	printf("\n\nvuoi ripetere il programma? (1 si,0 no): ");
    	scanf("%d",&scelta);
    	
	}while(scelta==1);
    
    printf("\n\n");
    system("pause");
}

int fattoriale(int n){
	int i;	//VARIABILE INDICE
	int fat;	//VARIABILE FATTORIALE
	
	if(n>=0){
		
		//CALCOLO FATTORIALE
		fat=1;
		for(i=n;i>0;i--){
			fat=fat*i;
		}
		return fat;
	}else{
		return 0;
	}
}
