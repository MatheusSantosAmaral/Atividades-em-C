//  Caua Nobrega RA 117387 - BEE ID 971968
//  Matheus Amaral RA 116620 - BEE ID 971955
//  Pedro Tanaka RA 117721 - BEE ID 971982
//  Rafael RA 116880 - BEE 971948
//  Ryan Ribeiro RA 116684 - BEE ID 971946
//  Sofia RA 116622 - BEE 971958

#include <stdio.h>
#include <stdlib.h>

double calcularPontuacao(double notas[], double gd) {
    double maior = notas[0], menor = notas[0], soma = 0.0;
    int i;
    
    for (i = 0; i < 7; i++) {
        if (notas[i] > maior) maior = notas[i];
        if (notas[i] < menor) menor = notas[i];
        soma += notas[i];
    }
    
    soma = soma - maior - menor;
    
    return soma * gd;
}

int main() {
    int i, j, qntdCompetidores;
    double gd, notas[7];
    
    // Solicita a quantidade de competidores
    scanf("%d", &qntdCompetidores);
    
    // Aloca memória para armazenar os resultados de cada competidor
    double **resultados = (double **)malloc(qntdCompetidores * sizeof(double *));
    if (resultados == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }
    
    // Aloca memória para armazenar os nomes dos competidores
    char **nomes = (char **)malloc(qntdCompetidores * sizeof(char *));
    if (nomes == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Para cada competidor, aloca memória e lê os dados
    for (i = 0; i < qntdCompetidores; i++) {
        resultados[i] = (double *)malloc(sizeof(double)); 
        if (resultados[i] == NULL) {
            printf("Erro ao alocar memória para o resultado do competidor %d!\n", i + 1);
            return 1;
        }
        
        nomes[i] = (char *)malloc(10 * sizeof(char)); 
        if (nomes[i] == NULL) {
            printf("Erro ao alocar memória para o nome %d!\n", i + 1);
            return 1;
        }

        // Leitura do nome e notas do competidor
        scanf("%s", nomes[i]); 
        scanf("%lf", &gd);
        
        for (j = 0; j < 7; j++) {
            scanf("%lf", &notas[j]);
        }

        // Calcula a pontuação e armazena o valor diretamente em resultados[i]
        *resultados[i] = calcularPontuacao(notas, gd);
    }

    // Exibe os resultados dos competidores
    for (i = 0; i < qntdCompetidores; i++) {
        printf("%s %.2lf\n", nomes[i], *resultados[i]);
    }

    // Libera a memória alocada
    for (i = 0; i < qntdCompetidores; i++) {
        free(resultados[i]);
        free(nomes[i]);
    }
    free(resultados);
    free(nomes);
    
    return 0;
}
