/*Il programma letti tre numeri, determini se possono essere considerati in progressione aritmetica; una progressione aritmetica è una serie di numeri in cui la differenza tra due numeri successivi è costante.*/

#include <stdio.h>

int main(){
    int num1, num2, num3, diff1, diff2;

    printf("Inserisci il numero 1: ");
    scanf("%d", &num1);
    printf("Inserisci il numero 2: ");
    scanf("%d", &num2);
    printf("Inserisci il numero 3: ");
    scanf("%d", &num3);
    diff1 = num2-num1;
    diff2 = num3-num2;
    if(diff1 == diff2) {
        printf("I numeri sono in progressione aritmetica");
    } else {
        printf("NOOOOOOOOOOOO");
    }
    return 0;
}