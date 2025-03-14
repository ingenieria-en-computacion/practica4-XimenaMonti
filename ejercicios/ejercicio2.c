#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;

    // Solicitar el número de filas y columnas
    printf("Ingrese el número de filas: ");
    scanf("%d", &m);
    
    printf("Ingrese el número de columnas: ");
    scanf("%d", &n);

    // Reserva de memoria para la matriz
    int *matrix = (int *)calloc(m * n, sizeof(int));
    if (matrix == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    // Imprimir la matriz inicializada con ceros
    printf("Matriz inicializada con ceros:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i * n + j]); // Imprime el valor de la posición (i, j)
        }
        printf("\n");
    }

    
    int row, col, value;
    printf("Ingrese las coordenadas (fila, columna) y el valor para modificar (ej. 1 2 5):\n");
    scanf("%d %d %d", &row, &col, &value);

   
    if (row >= 1 && row <= m && col >= 1 && col <= n) {
        matrix[(row - 1) * n + (col - 1)] = value; // Modifica el valor en la posición indicada
    } else {
        printf("Índices fuera de rango.\n");
    }

    // Imprimir la matriz actualizada
    printf("Matriz actualizada:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i * n + j]); 
        }
        printf("\n");
    }

 
    free(matrix);

    return 0;
}


