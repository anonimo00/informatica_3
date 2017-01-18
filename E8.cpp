/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 17/01/2017
programma=dato un numero compreso tra 2 e 10 stampare la relativa tabellina
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,c;
    do{       //ciclo che controlla il numero preso in input
        printf("inserire un numero tra 2 e 10:");
        scanf("%d",&n);
    }while((n<2)||(n>10));
    for(i=0;i<=10;i++){    //ciclo per calcolare la tabellina del numero e la resistuisce in output
                      c=n*i;      //operazioni della tabellina
                      printf("\n %d*%d=%d",n,i,c);
    }
    system("pause");
}
