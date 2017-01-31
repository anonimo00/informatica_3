/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 17/01/2017
programma=prodotto tra il vettore e num
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int k,n2,n1,num,i,v[999];
    do{
       printf("inserire n2 < 1000 e dispari:");
       scanf("%d",&n2);      
    }while((n2>1000)||(n2%2==0));            //controllo di n2 che deve essere dispari e minore di 1000
    do{
       printf("inserire n1 > 0 e n1 < n2:");
       scanf("%d",&n1);
    }while((n1<=0)||(n1>n2));
    do{
       printf("numero della dimensione dell'array:");
       scanf("%d",&k);      //variabile della dimensione del vettore
    }while((k<n1)||(k>n2)); //controlla la dimensione se è compresa tra n1 e n2
    printf("inserisci num intero:");
    scanf("%d",&num);     //numero scalare intero
    for(i=0;i<k;i++){     //ciclo per inserire l'elemento nel vettore
                     do{
                        printf("%d-inserisci un numero compreso tra n1 e n2:",i+1);
                        scanf("%d",&v[i]);
                     }while((v[i]<n1)||(v[i]>n2));        //controlla l'elemento inserito
                     v[i]=v[i]*num; //prodotto tra l'elemento del vettore e il numero scalare
    }                
    for(i=0;i<k;i++){          //ciclo per far uscire a video il vettore
                     printf("\nV[%d]=%d",i+1,v[i]);
    }
    system("\npause");
}
