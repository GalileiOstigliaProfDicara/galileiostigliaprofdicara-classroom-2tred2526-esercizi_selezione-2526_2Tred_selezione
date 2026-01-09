/*Il programma verifica se una data inserita è corretta 
(attenzione i mesi sono 12, e non in tutti i mesi ci sono 31 giorni,
 attenzione anche agli anni bisestili)*/

#include <stdio.h>

int main(){
    int giorno, mese, anno;
    printf("inserisci giorno mese e anno: ");
    scanf("%d %d %d", &giorno, &mese, &anno);
    if(anno >= 0 && anno <= 2025) {
        if(mese == 2) {
            if((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0) {
                if(giorno >= 1 && giorno <= 29) {
                    printf("La data esiste!");
                } else {
                    printf("La data NON esiste!");
                }
            } else {
                if(giorno >= 1 && giorno <= 28) {
                    printf("La data esiste!");
                } else {
                    printf("La data NON esiste!");
                }
            }
        } else {
            if(mese == 9 || mese == 4 || mese == 6 || mese == 11) {
                if(giorno >= 1 && giorno <= 30) {
                    printf("La data esiste!");
                } else {
                    printf("La data NON esiste!");
                }
            } else {
                if(mese >= 1 && mese <= 12) {
                    if(giorno >= 1 && giorno <= 31) {
                        printf("La data esiste!");
                    } else {
                        printf("La data NON esiste!");
                    }
                }
            }
        }
    } else {
        printf("L'anno non esiste!");
    }
    return 0;
}