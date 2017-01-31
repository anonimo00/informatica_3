/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 17/01/2017
programma= stampa della tabelline da 2 a 10
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,k,t;
    for(i=2;i<=10;i++){           //ciclo per cambiare il numero della tabellina
                       t=0;  
                       printf("tabellina del %d",i);
                       for(k=1;k<=10;k++){   //ciclo per far uscire a video la prima tabellina
                                          t=t+i;
                                          printf("\n%d*%d=%d",i,k,t);
                       }
                       printf("\n\n");               
    } 
    system("pause");
}
