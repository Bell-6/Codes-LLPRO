#include <stdio.h>
    int main() {
        int n, s;
        int cont = 0;
            while (cont<5) {
                printf ("Digite o numero que deseja.\n");
                scanf ("%d", &n);
                    if (n %2 == 0) {
                        s= n + 2;
                    }
                    else {
                        s= n + 3;
                    }
                    cont=cont+1;
                    printf ("A soma do seu numero escolhido e%d \n", s);
            }
            return 0;
    }
