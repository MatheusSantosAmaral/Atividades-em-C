#include <stdio.h>
#include <ctype.h>

int main() {
    int i, j, linhaMatriz;
    char op;
    float media = 0, soma = 0, linha[12][12];
    
    scanf("%d", &linhaMatriz);
    getchar(); 
    
    scanf("%c", &op);
    op = toupper(op); 
    
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%f", &linha[i][j]);
        }
    }
    
    for (j = 0; j < 12; j++) {        
        soma += linha[linhaMatriz][j]; 
    }
    
    if (op == 'S') {
        printf("%.1f\n", soma);
    } else if (op == 'M') {
        media = soma / 12;  
        printf("%.1f\n", media); 
    }
    
    return 0;
}
