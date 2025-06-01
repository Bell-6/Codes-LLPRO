#include <stdio.h>
    int main (){
        int divid,divisor, quo;
        printf ("Digite o dividendo.\n");
        scanf ("%d", &divid);
        printf ("Digite o divisor.\n");
        scanf ("%d", &divisor);

        if (divisor==0){
            printf ("Sua divisao nao e permitida");
            return 1;
        }

        for (; divid>=divisor; divid -= divisor){
            quo++;
        }
        printf (" Seu quociente e %d\n", quo);
        return 0;

    }

