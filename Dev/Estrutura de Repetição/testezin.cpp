#include <stdio.h>

int main(){
	
	int nummai, numins, nummen = 100000;
	
	do {
		printf("Insiraa um numero: \n");
		scanf("%d", &numins);
		
		if ( numins > nummai ){
			nummai = numins;
		}
		
		if ( numins < nummen){
			nummen = numins;
		}
	} while( numins >= 0);
	
	printf("O maior numero foi: %d\n", nummai);
	printf("O menor numero foi: %d", nummai);
}
