/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 17/01/2017
programma=dato un numero calcolare il suo fattoriale
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int fat,n,i;
    fat=1;        //variabile per il calcolo del fattoriale
    printf("inserisci il numero da trasformare in fattoriale:");
    scanf("%d",&n);
    for(i=0;i<n;i++){           //calcolo del fattoriale
                     fat=fat*(n-i);
    }
    printf("il fattoriale di %d e': %d",n,fat);
    system("pause");
}
