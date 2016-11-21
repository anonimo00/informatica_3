/***********************
nome=Thomas Beato
classe=3INA
program= maggiore/minore
***********************/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,num_s,cont,k;
    printf("\n inserire il primo numero:");
    scanf("%d",&a);      //primo numero 
    printf("\n inserire il secondo numero:");
    scanf("%d",&b);      //secondo numero
    printf("\n inserire la quantita' di numeri successivi:");
    scanf("%d",&k);      //variabile che indica il numero di numeri successivi
    num_s=b;             //variabile che assume il valore di b
    cont=0;              //contatore
    if(a>b){
            printf("\n il numero maggiore e':%d",a);
            printf("\n il numero minore e':%d",b);
            printf("\n i numeri tra b e a sono:");
            while(num_s<a){
                        num_s=num_s+1; //variabile che deve assumere i valori tra b e a
                        printf("\n%d",num_s);
            }
    }
    else{
            printf("\n il numero maggiore e':%d",b);
            printf("\n il numero minore e':%d",a);
            printf("\n i numeri successivi a 'b' sono:");
            while(cont<k){
                        cont=cont+1;     //incrementa contatore
                        num_s=num_s+1;   //numeri successivi a b
                        printf("\n%d",num_s);
            }
    }  
    system("pause");
}                          
