/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 06/03/2017
programma= inserimento numeri dentro un array in ordine
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int v[100]={-2,5,6,10,15,20,35,49,51,60};   //array lista
    int n,t,i,c;                                //variabili per inserire il numero
    char ris[5];                                //stringa per rinserire il numero
    char fine[5]="fine";                     //stringa per uscire
    
    t=9; //elementi massimo dell'array
    
    //ciclo per ripetere il programma
    do{
        //ciclo per prendere il numero in input
        do{
            printf("inserisci il numero da inserire nell'array: ");
            scanf("%d",&n);
        }while(n<0);
        
        //cercare la posizione dove inserire il numero
        i=0;
        while(v[i]<n){
            
            i++;
        }
        
        //shift numeri dell'array a destra
        if(i<=t){ //inserire in ultima posizione
            c=t;
            while(c>=i){
                v[c+1]=v[c];
                c--;
            }
        }
        
        //inserisco il numero
        v[i]=n;
        
        //aumento la variabile dei elementi massimi dell'array
        t++;
        
        //output dell'array
        printf("\nl'array e':");
        for(i=0;i<=t;i++){
            printf("\n%d\n",v[i]);
        }
        system("\npause");
        system("cls");
        
        printf("vuoi inserire un altro numero?\n");
        scanf("%s",ris);
        
    }while(ris==fine);
    
    printf("\n\n");
    system("pause");
}
