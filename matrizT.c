#include <stdio.h>

// Función para inicializar una matriz en ceros
void inicializarMatrizCeros(int filas, int columnas, int limite, int matriz[columnas][filas][limite]) {
    for (int n = 0; n < columnas; n++) {
        for (int m = 0; m < filas; m++) {
            for (int p = 0; p < limite; p++) {
                matriz[n][m][p] = 0;
            }
        }
    }
}