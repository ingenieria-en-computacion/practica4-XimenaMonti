#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 2; // Tamaño inicial del arreglo
    int *arr = (int *)malloc(size * sizeof(int)); // Reservar memoria

    if (arr == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    int count = 0, num;
    printf("Ingrese números (ingrese -1 para terminar):\n");

    while (1) {
        scanf("%d", &num);
        if (num == -1) break; 

        if (count >= size) { 
            size *= 2;
            arr = (int *)realloc(arr, size * sizeof(int));
            if (arr == NULL) {
                printf("Error: No se pudo reasignar memoria.\n");
                return 1;
            }
        }

        arr[count++] = num; // Guardar número en el arreglo
    }

    printf("La lista ingresada es: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]); // Imprimir los números
    }
    printf("\n");

    free(arr); 
    return 0;
}
