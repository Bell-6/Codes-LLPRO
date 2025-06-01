#include <stdio.h>

int main() {
    int A[6], B[6], C[6], D[6];
    int i;

    printf("Digite os 6 elementos da matriz A:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os 6 elementos da matriz B:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &B[i]);
    }

    // Criando a matriz C com elementos de índice ímpar de A e B
    for (i = 0; i < 3; i++) {
        C[i] = A[2 * i + 1];
        C[i + 3] = B[2 * i + 1];
    }


    // Criando a matriz D com elementos de índice par de A e B
    for (i = 0; i < 3; i++) {
        D[i] = A[2 * i];
        D[i + 3] = B[2 * i];
    }

    printf("Matriz C:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    printf("Matriz D:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", D[i]);
    }
    printf("\n");

    return 0;
}


