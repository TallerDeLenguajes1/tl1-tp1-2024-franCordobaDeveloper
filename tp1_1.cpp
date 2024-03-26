#include <stdio.h>


int main ()
{
    
    int numero = 26;
    int *punt_numero = &numero;

    printf("\nContenido del puntero: %d\n", *punt_numero);

    printf("\nDirección de memoria almacenada por el puntero: %p\n", (void*) punt_numero);

    printf("\nDireccion de memoria del puntero: %p", &punt_numero);

    printf("\nDireccion de memoria de la variable: %p", &numero);

    printf("\n Tamaño de memoria utilizado por la variable: %zu bytes\n", sizeof(numero));
    return 0;
}