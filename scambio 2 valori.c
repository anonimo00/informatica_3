/*************************
nome=thomas beato
classe=3 IN A
data=7/11/2016
programma= scambio di numeri tra 2 variabili
*************************/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c;         //variabili per lo scambio
	printf("inserisci a:");
	scanf("%d",&a);     //prima variabile da scambiare
	printf("inserisci b:");
	scanf("%d",b);      //seconda variabile da scambiare
	c=a;        //copio il valore di a su c
	a=b;		//sposto ill valore di b su a
	b=c;		//copio il valore di c(cioè a) su b
	printf("\nil valore di a e':%d",a); //mostro la variabile a sul monitor
	printf("\nil valore di b e':%d",b); //mostro la variabile b sul monitor
}
