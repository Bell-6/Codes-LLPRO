
#include <stdio.h>

int main() {
    double num1, num2, resultado;
    int opcao;

    printf("Digite o primeiro n�mero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%lf", &num2);

    printf("\nEscolha a opera��o:\n");
    printf("1. Soma\n");
    printf("2. Subtra��o\n");
    printf("3. Multiplica��o\n");
    printf("4. Divis�o\n");


    printf("Digite sua op��o (1-4): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        resultado = num1 + num2;
        printf("Resultado da soma: %.2lf\n", resultado);
    }
    else if (opcao == 2) {
        resultado = num1 - num2;
        printf("Resultado da subtra��o: %.2lf\n", resultado);
    }
    else if (opcao == 3) {
        resultado = num1 * num2;
        printf("Resultado da multiplica��o: %.2lf\n", resultado);
    }
    else if (opcao == 4) {

        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado da divis�o: %.2lf\n", resultado);
        } else {
            printf("Erro: Divis�o por zero n�o � permitida.\n");
        }
    }
    else {
        printf("Op��o inv�lida! Por favor escolha uma op��o entre 1 e 4.\n");
    }

    return 0;
}


