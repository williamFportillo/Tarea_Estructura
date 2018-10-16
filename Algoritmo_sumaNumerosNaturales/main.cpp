#include <conio.h>
#include <stdio.h>

int main() {
int i=1;
    int suma=0;
    printf("Suma de los primeros 100 numeros naturales \n");
    while(i<=100){
        suma = suma+i;
        i++;
    }
    printf("La suma es: %d",suma);
    getch();
}