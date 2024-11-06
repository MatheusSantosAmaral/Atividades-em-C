#include <stdio.h>

void calculo(int valor) {
    int qntia;
    
    qntia = valor / 100;
    printf("%d nota(s) de R$ 100,00\n", qntia);
    valor %= 100;
    
    qntia = valor / 50;
    printf("%d nota(s) de R$ 50,00\n", qntia);
    valor %= 50;
    
    qntia = valor / 20;
    printf("%d nota(s) de R$ 20,00\n", qntia);
    valor %= 20;
    
    qntia = valor / 10;
    printf("%d nota(s) de R$ 10,00\n", qntia);
    valor %= 10;
    
    qntia = valor / 5;
    printf("%d nota(s) de R$ 5,00\n", qntia);
    valor %= 5;
    
    qntia = valor / 2;
    printf("%d nota(s) de R$ 2,00\n", qntia);
    valor %= 2;
    
    qntia = valor / 1;
    printf("%d nota(s) de R$ 1,00\n", qntia);
}

int main() {
    int valor;
    
    printf("Digite o valor: ");
    scanf("%d", &valor);
    
    calculo(valor);
    
    return 0;
}
