#include <stdio.h>

int main() {
    char carattere;

    printf("Inserisci una letterina: ");
    scanf("%c", &carattere);

    if(carattere == 'a' || carattere == 'b' || carattere == 'c') {
        printf("il carattere inserito è una delle prime 3 lettere..\n");
    } else {
        printf("è qualcos'altro\n");
    }

    if(carattere >= 65 && carattere <= 'Z') {
        printf("il carattere inserito è una lettera maiuscola\n");
    } else {
        if(carattere >= 'a' && carattere <= 'z'){
            printf("il carattere inserito è una lettera minuscola\n");
        } else {
            printf("il carattere inserito è non una lettera\n");
        }
    }

    int numero = 0;
    char carattere2 = '0';
    if(carattere2 >= '0' && carattere2 <= '5'){
        printf("è stato inserito un carattere che è una cifra tra 0 e 5");
    }
}