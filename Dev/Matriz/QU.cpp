#include <stdio.h>
int main (){
	int lista [5];
	int i;
	float media, soma, nota;
	
	for (i =0; i<5; i++){
		printf ("Digite a nota\n");
		scanf ("%f", &nota);
		soma= soma + nota;
	}
		media = soma/5;
		printf ("a media das notas e : %2.f \n", media);
		return 0;
	
}
