/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 17/01/2017
programma=array ed eliminazione con lo shift
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int v[101],i,num,k,x;
    do{
       printf("inserisci dimensione dell'array:");
       scanf("%d",&k);              //dimensione dell'array
       system("cls");
    }while(k>100);                  //verifica se la variabile rispetta la condizione
    for(i=0;i<k;i++){               //ciclo per caricare i numeri nell'array
                     printf("inserisci elemento n° %d : ",i);
                     scanf("%d",&v[i]);
                     system("cls");
    }
    printf("inserisci numero da eliminare:");
    scanf("%d",&num);        //numero da ricercare nell'array
    i=0;
    v[100]=num;              //inserisco una sentinella
    while(v[i]!=num){
                     i++;
    }
    if(i==100){
               printf("il numero non si trova sull'array:");
    }else{
          for(x=i;x<k;x++){      //ciclo per eliminare il numero sull'array
                           v[x]=v[x+1];
          }
          k--;
    }     
    system("cls");
    for(i=0;i<k;i++){                  //stampo l'array
                     printf("\n%d",v[i]);
    }
    printf("\n\n");
    system("pause");
}
