
#include <stdio.h>
#include <stdbool.h>


int main() {
    int caminho[MAX_NOS];
    int tamanho;

    printf("Digite o n�mero de pontos no caminho (m�ximo %d): ", MAX_NOS);
    scanf("%d", &tamanho);

 
    if (tamanho > MAX_NOS) {
        printf("O n�mero m�ximo de pontos � %d.\n", MAX_NOS);
        return 1;
    }

    printf("Digite os pontos do caminho (separados por espa�o): ");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &caminho[i]);
    }

  
    if (verificar_caminho(caminho, tamanho)) {
        printf("A equipe venceu!\n");
    } else {
        printf("A equipe n�o venceu. Caminho incorreto.\n");
    }

    return 0;
}

