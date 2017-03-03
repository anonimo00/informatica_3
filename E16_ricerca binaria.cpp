/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 17/01/2017
programma= ricerca binaria
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int v[]={2,4,10,18,23,26,33,37,42,49,53,57,63,65,71,78,83,87,95,100};   //vettore per la ricerca
    int min,max,cen;  //variabili per la ricerca binaria
    int flag=0,c=0;         //variabile controllo
    int n;              //numero in input
    min=0;
    max=19;
    
    //prendo il numero in input
    do{
        printf("inserisci il numero:");
        scanf("%d",&n);
    }while((n<0)||(n>100));
    
    //inizia la ricerca binaria
    while((min<=max)&&(flag==0)){
        cen=((max-min)/2)+min;
        if(v[cen]==n){
            flag=1;
        }else{
            if(v[cen]<n){
                min=cen+1;
            }else{
                max=cen-1;
            }
        }
        c++;
    }
    
    if(flag==1){
        printf("\nil numero da cercare si trova nella posizione:%d  passi utilizzati: %d",cen+1,c);
    }else{
        printf("\nil numero non e' presente nell'array.");
    }
          
    printf("\n\n");
    system("pause");
}
