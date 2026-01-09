/*Scrivere una programma in C che chieda l'iniziale del nome
dell'utente. Se l'iniziale è nella prima metà dell'alfabeto, chiedere
all'utente due numeri e mostrare la loro media. Altrimenti, mostrare
la scritta "oggi hai vinto una cioccolata."*/

#include <stdio.h>

int main() {
    char iniziale;
    float numero1, numero2, media;

    printf("Inserisci l'iniziale del tuo bellissimo nome: ");
    scanf("%c", &iniziale);

    if((iniziale >= 'a' && iniziale <= ('a'+'z')/2) || (iniziale >= 'A' && iniziale <= 'M')) {
        printf("La tua iniziale è nella prima metà!!! YUPPPPPPPI\n");
        printf("Inserisci un primo numero: ");
        scanf("%f", &numero1);
        printf("Inserisci un secondo numero: ");
        scanf("%f", &numero2);
        media = (numero1 + numero2) / 2;
        printf("la media calcolata dal mio potentissimo PC è: %.3f", media);
    } else {
        printf("Hai vinto una cioccolata.");
    }
}