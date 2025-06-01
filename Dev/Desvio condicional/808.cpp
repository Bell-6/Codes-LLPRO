
#include <stdio.h>
	int main () {
		float s;
			printf("Digite o valor do salario.\n");
				scanf ("%f", &s);
			if (s <2000) {
				s*= 1.15;
					printf ("O valor do seu salario e %2.f", s);	
						 }
				else if (s <=3000 ) {
				s*= 1.10;
					printf ("O valor do seu salario e %2.f", s);	
									}
					else { 	
					s*= 1.05;
						printf ("O valor do seu salario e %2.f", s);	
						 }
	}
		
		
