#include <stdio.h>
	int classe(int ano) {
	    int idade = 2025 - ano;
	
	    if (idade <= 13) {
	        printf("Classificação: Criança - Criança deve estar acompanhada de adulto para atendimento.\n");
	    } else if (14 <= idade && idade <= 21) {
	        printf("Classificação: Adolescente - Fila comum - Sem prioridade.\n");
	    } else if (22 <= idade && idade <= 60) {
	        printf("Classificação: Adulto - Fila comum - Sem prioridade.\n");
	    } else {
	        printf("Classificação: Idoso - Fila prioritária.\n");
	    }
	}
	
	int main() {
	    int ano;
	
	    printf("Digite o ano que nasceu: ");
	    scanf("%d", &ano);
	
	    printf("A sua classificação:\n");
	    classe(ano);
	
	    return 0;
	}
	
	#include <stdio.h>
	int  classe( int ano){
		int idade= 2025 - ano;
	
		if (idade <=13){
		printf (" Criança - Criança deve tá acompanhada de adulto para atendimento");
		}
	
		else if (14 <=idade && idade >=21){
		printf ("Adolescente - Fila comum - Sem prioridade");
		}
	
		else if ( 22 <= idade && idade<=60){
		printf (" Adulto - Fila comum - Sem prioridade");
		}
	
		else {
		printf ("Idoso - Fila prioritaria");
		}
	
}
	
	
	int main (){
		int ano;
		
		printf ("Diga o ano que nasceu\n");
		scanf ("%d", &ano);
		
		printf("A sua classificação:\n"); 
		classe(ano);
		
		return 0;
		 }
	
