#include <stdio.h>
#include <float.h> 

int main() {
    float matriz[5][10], menor = FLT_MAX;
    int i, j, colunaMenor = 0;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 2; j++) {
            scanf("%f", &matriz[i][j]);

            if (matriz[i][j] < menor) 
			{
                menor = matriz[i][j];
                colunaMenor = j; 
            }
        }
    }

    printf("A coluna %d eh onde esta o menor valor, %.2f:\n", colunaMenor, menor);
    
    for (i = 0; i < 5; i++) 
        printf("%.2f\n", matriz[i][colunaMenor]);
    

    return 0;
}

