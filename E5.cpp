/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 17/01/2017
programma=calcolo della media di n numeri
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int k,somma,media,n,i;
    printf("inserire quantita' di numeri:");
    scanf("%d",&k);            //variabile per quantità di numeri
    somma=0;                   //varibile per la somma dei numeri
    i=0;                       //contatore per il ciclo while
    while(i<k){                //ciclo per prendere i numeri
               printf("inserire un numero:");
               scanf("%d",&n);
               somma=somma+n;   //somma i numeri    
               i=i+1;           //incremento contatore
    }
    media=somma/k;              //calcolo media
    printf("la media e':%d",media);
    system("pause");
}
