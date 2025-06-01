#include <stdio.h>
    int main(){
        int i, j, fat;
            for (i=1; i<10; i++){
                if (i%2==1){
                    fat=1;
            for (j=1;j<=i;j++){
                fat= fat*j;
            }
                printf (" o fatorial de %d = %d\n",i , fat);
            }
            }
return 0;
    }
