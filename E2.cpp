/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 17/01/2017
programma= Dati 3 numeri trovare il più grande
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c,max;
    printf("inserire il primo numero:");
    scanf("%d",&a);     //primo numero
    printf("inserire il secondo numero:");
    scanf("%d",&b);     //secondo numero
    printf("inserire il terzo numero:");
    scanf("%d",&c);     //terzo numero
    if(a>b){            //verifica il numero più grande tra i primi due numeri
           max=a;       //imposta il primo numero come max
           }else{
           max=b;       //imposta il secondo numero come max
    }
    if(max<c){          //verifica il numero più grande tra max e il terzo numero
              max=c;    //imposta il terzo numero come max
    }
    printf("il numero piu' grande e':%d",max);    //visualizza max
    system("pause");
}
