#include <stdio.h>
#include <conio.h>
	int main (){
	int a[4], b[4];
	int i;
		
	printf ("Digite 4 elementos para a matriz A:\n");
	for (i=0; i<4; i++){
		scanf ("%d", &a[i]);
		b[i]= a [i] * a[i];
	}
	
	for (i=0; i<4; i++){
		printf (" B : %d\n", b[i]);
	}
	
		
		return 0;
}


