#include <stdio.h>
int main(){
    float n1, n2, operacao,  soma, sub, div, multi;
        printf ("Digite seu primeiro número.\n");
        scanf ("%f",&n1);
        printf ("Digite seu segundo número.\n");
        scanf ("%f",&n2);
        printf ("Escolha a operação.\n");
            printf ("1.Soma.");
            printf ("2.Subtração.");
            printf ("3.Multiplicação.");
            printf ("4.Divisão.");
        printf ("Digite oo número da operação.\n");
        scanf ("%f", &operacao);
            if (opcao==1){
                soma = n1+n2;
                printf ("O resultado de sua soma será %2.f", soma);
            }
return 0;
}]]
