#include <stdio.h>

// a) 
int cuadrado(int num) {
    return num * num;
}

// b) Versión void
void cuadradoVoid(int num, int *resultado) {
    *resultado = num * num;
}

// c)
void mostrarVariable(int *var) {
    printf("\nContenido: %d, Direccion: %p\n", *var, var);
}

// d) 
void Invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

// e) 
void orden(int *a, int *b) {
    if (*a > *b) {
        Invertir(a, b);
    }
}

// f) 
int main() {
    int num1, num2;
    
    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &num1, &num2);
    
    printf("\nCuadrado de %d: %d", num1, cuadrado(num1));
    int resultado;
    cuadradoVoid(num2, &resultado);
    printf("\nCuadrado de %d (void): %d", num2, resultado);
    
    printf("\n\nAnalisis de variables:");
    mostrarVariable(&num1);
    mostrarVariable(&num2);
    
    printf("\nValores originales: %d y %d", num1, num2);
    Invertir(&num1, &num2);
    printf("\nValores invertidos: %d y %d", num1, num2);
    
    orden(&num1, &num2);
    printf("\nValores ordenados: %d y %d\n", num1, num2);
    
    return 0;
}
