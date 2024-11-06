#include <stdio.h>

double calculaVelocidadeMedia(int tempo, int distancia) {
    return (double) distancia / tempo;
}


void verificaRecorde(int n) {
    int i, tempo, distancia;
    double velocidade, recorde = 0.0;
	
    for (i = 1; i <= n; i++) {
        scanf("%d %d", &tempo, &distancia);
    
        velocidade = calculaVelocidadeMedia(tempo, distancia);

        if (velocidade > recorde) {
            recorde = velocidade; 
            printf("%d\n", i);
        }
    }

}

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        
        verificaRecorde(n);
    }

    return 0;
}
