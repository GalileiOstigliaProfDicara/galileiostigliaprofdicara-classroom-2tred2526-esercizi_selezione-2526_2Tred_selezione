/*L’utente inserisce la propria età e il programma dice se è maggiorenne 
(ovvero con età maggiore uguale a 18 anni)*/

#include <stdio.h>

int main(){
    int eta;

    printf("Inserisci quanti anni hai: ");
    scanf("%d", &eta);
    if(eta>=18){
        printf("Sei maggiorenne!");
    } else {
        printf("Non sei maggiorenne");
    }
    return 0;
}