#include <stdio.h>

float area_t(float base, float altura) {
    return (base * altura) / 2;
}

float area_q (float lado) {
    return lado * lado;
}

float area_r(float largura, float altura) {
    return largura * altura;
}

int main() {
    int opcao;
    float base, altura, lado, largura, area;

    printf("Escolha a operacao que deseja calcular:\n");
    printf("1 - Area do triangulo\n");
    printf("2 - Area do quadrado\n");
    printf("3 - Area do retangulo\n");

    printf("Digite a opcao (1, 2 ou 3): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite a base do triangulo: ");
            scanf("%f", &base);
            printf("Digite a altura do triangulo: ");
            scanf("%f", &altura);
            area = area_t(base, altura);
            printf("A area do triangulo e: %.2f\n", area);
            break;
        case 2:
            printf("Digite o lado do quadrado: ");
            scanf("%f", &lado);
            area = area_q(lado);
            printf("A area do quadrado e: %.2f\n", area);
            break;
        case 3:
            printf("Digite a largura do retangulo: ");
            scanf("%f", &largura);
            printf("Digite a altura do retangulo: ");
            scanf("%f", &altura);
            area = area_r(largura, altura);
            printf("A area do retangulo e: %.2f\n", area);
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}


