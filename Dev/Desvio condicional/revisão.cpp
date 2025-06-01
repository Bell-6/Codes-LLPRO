
#include <stdio.h>
#include <stdbool.h>


int main() {
    int caminho[MAX_NOS];
    int tamanho;

    printf("Digite o número de pontos no caminho (máximo %d): ", MAX_NOS);
    scanf("%d", &tamanho);

 
    if (tamanho > MAX_NOS) {
        printf("O número máximo de pontos é %d.\n", MAX_NOS);
        return 1;
    }

    printf("Digite os pontos do caminho (separados por espaço): ");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &caminho[i]);
    }

  
    if (verificar_caminho(caminho, tamanho)) {
        printf("A equipe venceu!\n");
    } else {
        printf("A equipe não venceu. Caminho incorreto.\n");
    }

    return 0;
}

