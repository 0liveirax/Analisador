#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char linha[1000];
    char codigo[10000]; 
    int fordentrofor = 0;
    int forsozin = 0;
    char* result;
    
    arquivo = fopen("teste.c", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        strcat(codigo, linha); 
    }

    
    fclose(arquivo);

    int i,j, len = strlen(codigo);
    for (i = 0; i < len - 2; i++) {
    	if (codigo[i] == 'f' && codigo[i + 1] == 'o' && codigo[i + 2] == 'r') {    
    		for(j = i + 3 ; j < len - 2; j++){
    			if (codigo[j] == 'w' && codigo[j + 1] == 'h' && codigo[j + 2] == 'i' && codigo[j + 3] == 'l' && codigo[j + 4] == 'e'){
    				fordentrofor = fordentrofor + 2;
				}else if(codigo[j] == '}'){					
					forsozin = forsozin + 1;
					break;
				}
			}
		}
	}
	
	
	if(fordentrofor == 2){
		result = "O(n^2)";
	}else if(forsozin >= 1){
		result = "O(n)";
	}
   
    printf("Notacao do Algoritmo: %s\n", result );

    return 0;
}

