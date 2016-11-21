/**********************
nome=thomas beato
classe=3 IN A
data=13/11/2016
programma=tavola pitagorica o prodotto multipli di 5 dispari
**********************/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int k,c,m,prod;
	int t,v,h,n,e,f,a,p;   //variabili per la tavola pitagorica
	printf("inserisci un numero:");
	scanf("%d",&k);       //variabile che identifica quanti numeri deve acquisire
	c=0;       //contatore
	m=0;       //numeri multipli di 5
	prod=1;    //prodotto di tutti i numeri scelti
	if(k%3==0){         //decide se fare il prodotto dei numeri multipli di 5 dispari o fare la tavola pitagorica
		while(c<5){     //ciclo per il prodotto dei numeri multipli di 5 e dispari
			m=m+5;
			if((m>k)&&(m%2==1)){ 
				prod=prod*m;
				c=c+1;
			}
		}
		printf("il prodotto e':%d",prod);
		c=0;
	}else{
		while(c<9){                //ciclo per la tavola pitagorica
			c=c+1;
			t=2*c;
			v=3*c;
			h=4*c;
			n=5*c;
			e=6*c;
			f=7*c;
			a=8*c;
			p=9*c;
			printf("\n\n1: %d",c);
			printf("\n2: %d",t);
			printf("\n3: %d",v);
			printf("\n4: %d",h);
			printf("\n5: %d",n);
			printf("\n6: %d",e);
			printf("\n7: %d",f);
			printf("\n8: %d",a);
			printf("\n9: %d",p);
		}
	}
}
