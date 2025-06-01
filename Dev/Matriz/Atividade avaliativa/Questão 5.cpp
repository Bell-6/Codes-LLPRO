#include <stdio.h>
#include <conio.h>

int main() {
    int a[3], b[3], c[6];
    int i;

    printf("Digite 3 elementos para a matriz A:\n");
    
	for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }

    printf("Digite 3 elementos para a matriz B:\n");
    
	for (int i = 0; i < 3; i++) {
        scanf("%d", &b[i]);
        c[i + 3] = b[i];
    }

    printf("Matriz C:\n");
    
    for (int i = 0; i < 6; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
