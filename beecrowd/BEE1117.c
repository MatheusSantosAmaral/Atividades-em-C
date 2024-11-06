#include <stdio.h>

int main() {
    float nota, media, soma = 0;
    int i = 1;
    
    while (i <= 2) {
        scanf("%f", &nota);
        
        if (nota < 0 || nota > 10) {
            printf("nota invalida\n");
        } else {
            soma += nota;
            i++;
        }
    }
    
    printf("media = %.2f\n", soma / 2);
    return 0;
}
