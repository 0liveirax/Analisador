#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i,j,k,l, soma = 0;
    int numeros[10];
    int key;

    srand(time(NULL));
 	
 	printf("Numeros aleatorios gerados:\n\n");
    for (i = 0; i < 10; i++) {    	
        numeros[i] = rand() % 100; 		       
        printf("%d ", numeros[i]);        
    }
        
    for(j = 0; j < 10 ; j++){
    	key = numeros[j];
    	k = j - 1;    	
    	while(k >= 0 && numeros[k] > key){
    		numeros[k+1] = numeros[k];
    		k = k - 1;
		}
		numeros[k + 1] = key;
	}
	
	printf("\n");
	for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    return 0;
}

