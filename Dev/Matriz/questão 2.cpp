#include <stdio.h>
int main (){
	int i, a[5]= {3,7,8,4,5};
	int ma= a[0];
	
	for (i = 1; i<5; i++){
		if (ma<a[i]){
			ma=a[i];
		}
	
		
		
	}	
		printf ("O maior numero e %d", ma);
		return 0;
	
	
	
}
