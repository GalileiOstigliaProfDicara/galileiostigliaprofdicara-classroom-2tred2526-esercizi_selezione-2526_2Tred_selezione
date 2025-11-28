/*L’utente inserisce un anno ed il calcolatore verifica se 
l’anno inserito è bisestile.
Un anno è bisestile se è divisibile per 4 ma non per 100, 
oppure se è divisibile per 400 (ad esempio il 1900 non è stato 
bisestile, mentre il 2000 lo è stato).*/

#include <stdio.h>

int main(){
    int anno;
    printf("Inserisci l'anno: ");
    scanf("%d", &anno);
    if(anno % 4 == 0 && anno % 100 != 0) {
        printf("L'anno è bisestile.");
    } else {
        if(anno % 400 == 0) {
            printf("L'anno è bisestile");
        } else {
            printf("L'anno non è bisestile.");
        }
    }

    if((anno%4 == 0 && anno%100 != 0) || anno%400==0) {
        printf("L'anno è bisestile.");
    } else {
        printf("L'anno non è bisestile.");
    }
    return 0;
}