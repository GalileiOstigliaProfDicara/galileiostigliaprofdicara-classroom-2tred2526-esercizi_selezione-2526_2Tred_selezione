/*Il programma legge tre lunghezze dei lati di un triangolo e dice se il triangolo è scaleno, isoscele o equilatero
(Nota bene, dice solo la tipologia più particolare, ovvero se è equilatero, dice solo che è equilatero e non anche che è isoscele)*/

#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("Inserisci il lato 1: ");
    scanf("%d", &num1);
    printf("Inserisci il lato 2: ");
    scanf("%d", &num2);
    printf("Inserisci il lato 3: ");
    scanf("%d", &num3);

    if(num1==num2 && num2==num3) {
        printf("Il triangolo è equilatero!\n");
    } else {
        if(num1==num2 || num1==num3 || num2==num3) {
            printf("Il triangolo è isoscele\n");
        }else {
            printf("Il triangolo è scaleno\n");
        }
    }
    return 0;
}