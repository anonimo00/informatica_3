/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 17/01/2017
programma=dati n numeri (dall'utente) trovare il numero minimo
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,k,min,i;
    printf("inserire numeri ni numeri che desideri inserire:");
    scanf("%d",&k);         //variabile che indica il numero di numeri da prendere
    i=1;                    //contatore per k
    do{                     //ciclo per vedere il numero più piccolo
       printf("inserisci numero:");
       scanf("%d",&n);             //numero intero
       if(i==1){                  //impposta il numero più piccolo 
                min=n;
       }else{
             if(n<min){
                       min=n;
             }
       }
       i++;                       //incrementa contatore
    }while(i<=n);
    printf("il numero più piccolo e': %d",min);
    system("pause");
}
