
#include <stdio.h>

int main() {
    double num1, num2, resultado;
    int opcao;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    printf("\nEscolha a operação:\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");


    printf("Digite sua opção (1-4): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        resultado = num1 + num2;
        printf("Resultado da soma: %.2lf\n", resultado);
    }
    else if (opcao == 2) {
        resultado = num1 - num2;
        printf("Resultado da subtração: %.2lf\n", resultado);
    }
    else if (opcao == 3) {
        resultado = num1 * num2;
        printf("Resultado da multiplicação: %.2lf\n", resultado);
    }
    else if (opcao == 4) {

        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado da divisão: %.2lf\n", resultado);
        } else {
            printf("Erro: Divisão por zero não é permitida.\n");
        }
    }
    else {
        printf("Opção inválida! Por favor escolha uma opção entre 1 e 4.\n");
    }

    return 0;
}


