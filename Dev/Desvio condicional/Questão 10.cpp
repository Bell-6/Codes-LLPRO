#include <stdio.h>
	int classe(int ano) {
	    int idade = 2025 - ano;
	
	    if (idade <= 13) {
	        printf("Classifica��o: Crian�a - Crian�a deve estar acompanhada de adulto para atendimento.\n");
	    } else if (14 <= idade && idade <= 21) {
	        printf("Classifica��o: Adolescente - Fila comum - Sem prioridade.\n");
	    } else if (22 <= idade && idade <= 60) {
	        printf("Classifica��o: Adulto - Fila comum - Sem prioridade.\n");
	    } else {
	        printf("Classifica��o: Idoso - Fila priorit�ria.\n");
	    }
	}
	
	int main() {
	    int ano;
	
	    printf("Digite o ano que nasceu: ");
	    scanf("%d", &ano);
	
	    printf("A sua classifica��o:\n");
	    classe(ano);
	
	    return 0;
	}
	
	#include <stdio.h>
	int  classe( int ano){
		int idade= 2025 - ano;
	
		if (idade <=13){
		printf (" Crian�a - Crian�a deve t� acompanhada de adulto para atendimento");
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
		
		printf("A sua classifica��o:\n"); 
		classe(ano);
		
		return�0;
		�}
	
