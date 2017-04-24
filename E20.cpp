/*******************
alunno= Thomas Beato
classe= 3 IN A
Data= 24/04/2017
programma= E20
versione= 1.oV
*******************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char n[100],m[100];		//STRINGHE NOME
    int i;		//VARIABILE INDICE
    int c;		//VARIABILE FLAG
    
    //CARICO LE DUE STRINGHE
    printf("inserisci il primo nome: ");
    scanf("%s", n);
    
    printf("inserisco il secondo nome: ");
    scanf("%s", m);
    
    //CICLO PER VERIFICARE SE I DUE NOME SONO UGUALI
    i=0;
    c=0;
    while((n[i]== '\0') || (m[i]== '\0') && (c==0)){
    	if(n[i]!=m[i]){
    		c++;
		}
		i++;
	}
	
	//STAMPO I RISULTATI
	if(c==0){
		printf("\n\ni due nomi sono UGUALI....");
	}else{
		printf("\n\ni due nomi non sono uguali...");
	}
	
    printf("\n\n");
    system("pause");
}
