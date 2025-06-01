#include <stdio.h>
#include <conio.h>
int main(){
	int a[6], b[6], c[6], d[6];
	int i;
	
	printf("Insira 6 numeros para A: \n");
	
	for (i = 0; i < 6; i = i + 1){
		scanf("%d", &a[i]);
	}
	
	printf("Insira 6 numeros para B: \n");
	
	for (i = 0; i < 6; i = i + 1){	
		scanf("%d", &b[i]);
	}
	
	for (i = 0; i < 6; i = i + 1){
		
		if (i % 2 == 0){
			d[i] = a[i];
			c[i] = b[i];  
		} else {
			c[i] = a[i];
			d[i] = b[i];
		}
	}

	printf("C: ");
	for (i = 0; i< 6; i = i + 1){
		printf("%d ", c[i]);
	}
	
	printf("\n");
		
	printf("D: ");
	for (i = 0; i < 6; i = i + 1){
		printf("%d ", d[i]);
	}
	
	return 0;
}
