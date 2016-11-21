/***************************
autore= Thomas Beato
classe= 3 IN A
data= 21/11/2016
programma= biglietto mirabilandia
ver: 1.0
***************************/
#include<stdio.h>
#include<stdlib.h>
int main(){
    float prezzo,accom;
    int a,alt,eta,c,sup;
    printf("inserisci 1 se la persona ha problemi 0 se e' normale:");
    scanf("%d",&a);   //variabile che indica se a problemi 
    if(a==1){
            prezzo=0,00; //prezzo disabile
            accom=25,50; //prezzo accompagnatore
            printf("il prezzo del disabile e':%f",prezzo); //mostra il prezzo del disabile
            printf("il prezzo dell'accompagnatore e':%f",accom); //mostra il prezzo dell'accompagnatore
    }else{
          printf("inserisci altezza in centimetri:");
          scanf("%d",&alt); //altezza della persona
          printf("inserisci eta:");
          scanf("%d",&eta); //età della persona
                  if(alt>100){   //indica se il biglietto è per il bambino 
                                  if(alt>140){ //indica se il biglietto è ridotto o intero
                                              prezzo=34,90; //prezzo intero
                                              if(eta>=60){ //indica se il biglietto è senior
                                                          prezzo=25,00; //prezzo over 60
                                              }
                                              sup=1; //variabile per il supplemento prezzo intero
                                  }else{
                                        prezzo=28,00; //prezzo ridotto
                                        sup=0; //variabile per il supplemento prezzo ridotto
                                  }
                  }else{
                        prezzo=0,00; //prezzo bambino
                  }
               printf("inserisci \"1\" se vuoi il supplemento o \"0\" se non lo vuoi per mirabeach:");
               scanf("%d",&c);   //variabile per vedere se vuole il supplemento
               if(c==1){         //indica se vuoi il supplemento
                       if(sup==1){        //supplemento per ridotto o intero
                                  prezzo=prezzo+9,50; //prezzo intero finale
                       }else{
                             prezzo=prezzo+7,50;   //prezzo ridotto finale
                       }
               }
               printf("il prezzo e':%f",prezzo); //mostra il prezzo finale
    }
}
