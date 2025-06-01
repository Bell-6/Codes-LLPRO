#include <stdio.h>
int main(){
    float n1, n2, operacao,  soma, sub, div, multi;
        printf ("Digite seu primeiro numero.\n");
    		scanf ("%f",&n1);
        printf ("Digite seu segundo numero.\n");
        	scanf ("%f",&n2);
        printf ("Escolha a operaçao.\n");
            printf ("1.Soma.\n");
            printf ("2.Subtraçao.\n");
            printf ("3.Multiplicaçao.\n");
            printf ("4.Divisao.\n");
        printf ("Digite oo numero da operaçao.\n");
       		scanf ("%f", &operacao);
            if (operacao==1){
                soma = n1+n2;
                printf ("O resultado de sua soma sera %2.f\n", soma);
               } 
       		if (operacao == 2){
       			sub= n1-n2;
       			printf ("O resultado de sua subtracao sera %2.f\n", sub);
			   }     
            if (operacao == 3){
       			multi = n1*n2;
       			printf ("O resultado de sua multiplicacao sera %2.f\n", multi);
       			
			   }     
            if (operacao == 4){
       			div= n1/n2;
       			printf ("O resultado de sua divisao sera %2.f\n", div);
			   }     
            
            
return 0;
}
