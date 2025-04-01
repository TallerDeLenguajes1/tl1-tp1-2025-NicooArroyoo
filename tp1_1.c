#include <stdio.h>

int main(){
    printf("hola mundo\n");

    int variable = 10;
    int *puntero = &variable;

    printf("\n1) Contenido del puntero: %d\n", *puntero);
    printf("2) Direccion almacenada por puntero: %p\n", puntero);
    printf("3) Direccion de memoria de la variable: %p\n", &variable);
    printf("4) Direccion de memoria del puntero: %p\n", &puntero);
    printf("5) Tamanio de la variable: %zu bytes\n", sizeof(variable));
    
    return 0;
}