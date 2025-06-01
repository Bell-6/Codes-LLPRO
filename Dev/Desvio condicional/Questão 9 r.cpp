#include <stdio.h>
#include <math.h>
#include <conio.h>
	
	float a_t  (float base, float altura)
	{
		return (base * altura)/2;
	}
	



int main (){
	int opcao;
	float base, altura, lado, largura, area;
	
	printf("Escolha a operacao que deseja calcular:\n");
    printf("1 - Area do triangulo\n");
    printf("2 - Area do quadrado\n");
    printf("3 - Area do retangulo\n");

	printf("Digite a opcao (1, 2 ou 3): ");
    scanf("%d", &opcao);

	switch (opcao){
	
	case 1:
		printf ("Digite a base");
		scanf ("%f", &base);
		printf ("Digite a altura");
		scanf ("%f", &altura);
		
		area = a_t (base, altura)
		
		
		
		
		
		
		
	}
	
	
	
	
}
