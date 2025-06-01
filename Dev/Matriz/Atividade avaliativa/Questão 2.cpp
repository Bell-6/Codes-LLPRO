#include <stdio.h>

int main() {
    int a[5], b[5], c[5];
    int i;

    printf("Digite 5 elementos para a matriz A:\n");
    
	for (int i = 0; i < 5; i++) {	
	scanf("%d", &a[i]);
}
    printf("Digite 5 elementos para a matriz B:\n");
    
    for (int i = 0; i < 5; i++) {
	scanf("%d", &b[i]);
}
    for (int i = 0; i < 5; i++){
	c[i] = a[i] - b[i];	
}
	
   printf("Matriz C:\n");
   	for (int i = 0; i < 5; i++) {
	   printf("%d ", c[i]);
}
    return 0;
}

