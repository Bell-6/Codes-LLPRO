#include <stdio.h>
int main(){
    float n1, n2, operacao,  soma, sub, div, multi;
        printf ("Digite seu primeiro n�mero.\n");
        scanf ("%f",&n1);
        printf ("Digite seu segundo n�mero.\n");
        scanf ("%f",&n2);
        printf ("Escolha a opera��o.\n");
            printf ("1.Soma.");
            printf ("2.Subtra��o.");
            printf ("3.Multiplica��o.");
            printf ("4.Divis�o.");
        printf ("Digite oo n�mero da opera��o.\n");
        scanf ("%f", &operacao);
            if (opcao==1){
                soma = n1+n2;
                printf ("O resultado de sua soma ser� %2.f", soma);
            }
return 0;
}]]
