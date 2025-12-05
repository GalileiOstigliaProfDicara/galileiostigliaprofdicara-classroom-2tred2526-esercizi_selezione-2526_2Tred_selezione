/*Il programma legge tre numeri e dice se possono essere le lunghezze dei lati di un triangolo (perché un triangolo possa essere tale la somma di ogni coppia lati deve essere maggiore dell’altro)*/

#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("Inserisci il lato 1: ");
    scanf("%d", &num1);
    printf("Inserisci il lato 2: ");
    scanf("%d", &num2);
    printf("Inserisci il lato 3: ");
    scanf("%d", &num3);

    if(num1+num2>num3 || num1+num3>num2 || num2+num3>num1) {
        printf("Il triangolo con i lati %d %d %d ESISTE!", num1, num2, num3);
    } else {
        printf("NON esiste :(((((");
    }

    if(num1+num2>num3){
        printf("Il triangolo con i lati %d %d %d ESISTE!", num1, num2, num3);
    } else {
        if(num2+num3>num1) {
            printf("Il triangolo con i lati %d %d %d ESISTE!", num1, num2, num3);
        } else {
            if(num1+num3>num2){
                printf("Il triangolo con i lati %d %d %d ESISTE!", num1, num2, num3);
            } else {
                printf("NON esiste :(((((");
            }
        }
    }
    return 0;
}