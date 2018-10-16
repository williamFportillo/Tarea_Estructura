#include <iostream>
#include <stdio.h>
#include <conio.h>
int main() {
    float n1,n2,n3,media;
    printf("Calcule la media de 3 notas\n");
    printf("Introduzca la primer nota: ");
    scanf("%f",&n1);
    printf("Introduzca la segunda nota: ");
    scanf("%f",&n2);
    printf("Introduzca la tercer nota: ");
    scanf("%f",&n3);
    media=(n1+n2+n3)/3;
    printf("La media es: %f ",media);
    getch();
}