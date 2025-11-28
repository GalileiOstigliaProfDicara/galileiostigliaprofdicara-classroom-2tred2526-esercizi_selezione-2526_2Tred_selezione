/*Il programma legge due numeri e controlla se il primo è maggiore del secondo.*/

#include <stdio.h>

int main(){
    int num1, num2;
    printf("inserisci un numero: ");
    scanf("%d", &num1);
    printf("inserisci un altro numero: ");
    scanf("%d", &num2);
    if(num1 > num2) {
        printf("Il numero 1 è più grande del numero 2");
    } else {
        printf("Il numero 1 è minore oppure uguale al numero 2");
    }
    return 0;
}