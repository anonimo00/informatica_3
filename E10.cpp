/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 17/01/2017
programma= indovina numero
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
int main(){
    int i,t,c,n,m,n_c,R,sleep;
    R=0;          //varibile per ripetere il gioco
    i=0;          //variabile flag
    t=10;         //variabile tentativi
    srand(time(NULL));        //mescola i numeri
    n_c=rand();       //numero casuale
    printf("                          BENVENUTI:");
    Sleep(1000);
    printf("\n                      Indovina il numero\n");
    Sleep(2000);
    printf("\ninserisci difficolta del gioco(1=difficile,0=facile):");
    scanf("%d",&c);     //variabile che indica la difficolta del gioco
    system("cls");
    while(R==0){
                while((t>0)&&(i==0)){           //ciclo del gioco
                                     printf("\ninserisci il numero:");
                                     scanf("%d",&n);     //varibile numero
                                     t=t-1;
                                     if(n==n_c){         //controllo numero
                                                m=10-t;  //varibile tentativi per l'output
                                                i=1;
                                     }else{
                                                Sleep(1000);
                                                printf("\nil numero e' errato....\n");
                                                if(c==0){
                                                         Sleep(1000);
                                                         if(n>n_c){
                                                                   printf("\nnumero troppo grande riprova\n");
                                                         }else{
                                                                   printf("\nnumero troppo piccolo riprova\n");
                                                         }
                                                }
                                     }
                                     Sleep(3500);
                                     system("cls");
                                     printf("hai ancora a disposizione %d tentativi\n\n",t);
                }
                Sleep(1000);
                if(i==0){
                         printf("\n                      GAME OVER");
                }else{
                         printf("\n                      YOU WIN!!!");
                }
                system("cls");
                Sleep(2000);
                printf("vuoi giocare di nuovo?");
                printf("\ninserisci 1=no , 0=si");
                scanf("%d",&R);
    }     
    system("pause");
}
