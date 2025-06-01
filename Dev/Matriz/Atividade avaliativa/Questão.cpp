#include <stdio.h>
#include <conio.h>
int main() {
    int a[10];
    int i, num; 

    printf("Digite um numero para calcular a tabuada:\n");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++) {
        a[i] = num * (i + 1);
    }

    printf("Tabuada do %d:\n", num);
    
    for (int i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", num, i + 1, a[i]);
    }

    return 0;
}

