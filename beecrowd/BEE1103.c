#include <stdio.h>

int roncaedorme(int h1, int m1, int h2, int m2) {
    int minutos_inicio = h1 * 60 + m1;
    int minutos_alarme = h2 * 60 + m2; 
    
    int calculo;

    if (minutos_alarme >= minutos_inicio) {
        calculo = minutos_alarme - minutos_inicio;
    } else {
        calculo = (1440 - minutos_inicio) + minutos_alarme;
    }

    return calculo;
}

int main() {
    int h1, m1, h2, m2, mindormir;

    while (1) {
    	
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) {
            break;
        }
        
        mindormir = roncaedorme(h1, m1, h2, m2);

        printf("%d\n", mindormir);
    }

    return 0;
}
