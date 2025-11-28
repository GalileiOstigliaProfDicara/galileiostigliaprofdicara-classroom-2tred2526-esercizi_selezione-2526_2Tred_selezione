/*Il programma legge due numeri e controlla se il primo è 
multiplo del secondo.*/

#include <stdio.h>

int main(){
    int num1 = 0, num2;
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);
    // % modulo --> calcola il resto di una divisione
    if(num1 % num2 == 0 ){
        printf("Il primo è multiplo del secondo !!! CRAAAZYYYYY");
    } else {
        printf("Il primo numero non è multiplo del secondo!!!!1!!!");
    }
    return 0;
}