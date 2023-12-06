#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para ingresar las dimensiones de la matriz
void DimensionesMatriz(int *filas, int *columnas) {
    printf("Ingrese el número de filas:\n");
    scanf("%d", filas);
    printf("Ingrese el número de columnas:\n");
    scanf("%d", columnas);
}
//generar matriz aleatoria

void MatrizAleatoria(int filas, int columnas, int matriz[filas][columnas]) {
    srand(time(NULL));

    printf("\nMatriz:\n");

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 100; // Generar un número aleatorio entre 0 y 99
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}