#include <stdio.h>
int main() {
    int a[4], b[4];
	int i;
	
    printf("Digite 4 elementos para a matriz A:\n");
    
    for (int i = 0; i < 4; i++){
    	scanf("%d", &a[i]);
	} 

    for (int i = 0; i < 4; i++){
    	b[i] = a[3 - i];
	} 

    printf("Matriz B:\n");
    
    for (int i = 0; i < 4; i++){
	 printf("%d ", b[i]);
}
    return 0;
}
