/*************************
nome=thomas beato
classe=3 IN A
data=7/11/2016
programma=primi 10 numeri pari e multipli di 5
*************************/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,c,m;
	printf("inserire un numero:");
	scanf("%d",&n); //n numero inserito dall'utente
	c=0; // c è il contatore
	m=5; //numeri multipli di 5 che usciranno in video
	printf("\ni 10 numeri sono:");
	while(c<10){      //ciclo per salvare i 10 numeri 
		m=m+5;
		if(m>n&&m%2==0){         //verifica se sono maggiori di n e pari
			printf("\n%d",m);
			c=c+1;
		}
	}
}
