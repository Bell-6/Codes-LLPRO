#include <stdio.h>
#include <conio.h>
	float soma ( float n1, float n2)
{
	 float s;
	s = n1 + n2;
	return (s);
}

float dobro1 (float n1){
	n1 = n1 * 2;
	return (n1);
	
}

float dobro2 (float n2) {
    n2= n2*2;
	return (n2);
}

int main (){
	float a,b, resultado_soma, resultado_d1, resultado_d2;
		printf ("Digite seu primeiro numero: \n");
		scanf ("%f", &a);
		printf ("Digite seu segundo numero: \n");
		scanf ("%f", &b);
		
		resultado_soma = soma (a, b);
		resultado_d1= dobro1 (a);
		resultado_d2= dobro2 (b);
		
		printf ("O resultado da soma e: %2.f \n", resultado_soma);
		printf ("O dobro do primeiro numero e : %2.f \n", resultado_d1);
		printf ("O dobro do segundo numero e : %2.f \n", resultado_d2);
		return 0;
}

