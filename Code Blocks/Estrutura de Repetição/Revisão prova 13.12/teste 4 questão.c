#include <stdio.h>
    int main (){
        int num,men,mai;
            printf ("Digite um numero\n");
            scanf ("%d", &num);
                if (num>0){
                    men=mai=num;

                for (;num>=0;){
                  printf ("Digite um numero\n");
                  scanf ("%d", &num);

                    if (num>=0){
                        if (num>mai){
                            mai = num;
                        }
                        if (num<men){
                            men=num;
                        }

                    }
                }
        printf ("o maior numero e %d\n", mai);
        printf ("o menor numero e %d\n", men);
        }
        else{
        printf ("numero invalido\n");
        }
        return 0;
    }
