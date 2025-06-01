#include <stdio.h>
#include <conio.h>

int main() {
    int a[5], b[5];
    int i;

    printf("Digite 5 elementos para a matriz A:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 1) { 
            b[i] = a[i] * 2;
        } else {
            b[i] = a[i];
        }
    }

    printf("Matriz B:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
