/*L’utente inserisce una temperatura in Celsius e il calcolatore la converte in Fahrenheit ed in Kelvin. Se la temperatura inserita è minore dello zero assoluto (-273,15), il calcolatore segnala un errore.
Si ricordi che:
Fahrenheit = (9/5) · Celsius + 32
Kelvin = Celsius + 273,15*/

#include <stdio.h>

int main(){
    float kelvin, celsius, fahrenheit;

    printf("Inserisci la temperatura in Celsius: ");
    scanf("%f", &celsius);
    
    if(celsius < -273.15) {
        printf("Sei finito nel sottosopra!");
        printf("Celsius: %f\n", celsius);
    } else {
        kelvin = celsius + 273.15;
        fahrenheit = 9/5 * celsius + 32;
        printf("Kelvin: %f\n", kelvin);
        printf("Celsius: %f\n", celsius);
        printf("Fahrenheit: %f\n", fahrenheit);
    }
    return 0;
}