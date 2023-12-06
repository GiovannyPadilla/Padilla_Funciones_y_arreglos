#include <stdio.h>

// Función para inicializar una matriz en ceros
void MatrizCeros(int filas, int columnas, int limite, int matriz[columnas][filas][limite]) {
    for (int n = 0; n < columnas; n++) {
        for (int m = 0; m < filas; m++) {
            for (int p = 0; p < limite; p++) {
                matriz[n][m][p] = 0;
            }
        }
    }
}

// Función para inicializar la última matriz en unos
void MatrizUnos(int filas, int columnas, int limite, int matriz[columnas][filas][limite]) {
    for (int m = 0; m < filas; m++) {
        for (int p = 0; p < limite; p++) {
            matriz[columnas - 1][m][p] = 1;
        }
    }
}

// Función para imprimir la matriz
void imprimirMatriz(int filas, int columnas, int limite, int matriz[columnas][filas][limite]) {
    printf("Matriz resultante:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            for (int k = 0; k < limite; k++) {
                printf("%d ", matriz[j][i][k]);
            }
            printf("\n");
        }
    }
}