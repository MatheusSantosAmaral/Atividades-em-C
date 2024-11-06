//  Caua Nobrega RA 117387 - BEE ID 971968
//  Matheus Amaral RA 116620 - BEE ID 971955
//  Pedro Tanaka RA 117721 - BEE ID 971982
//  Rafael RA 116880 - BEE 971948
//  Ryan Ribeiro RA 116684 - BEE ID 971946
//  Sofia RA 116622 - BEE 971958

#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    double delta, raiz1, raiz2;

    scanf("%lf %lf %lf", &A, &B, &C);
    
    if (A == 0) {
        printf("Impossivel calcular\n");
        return 0;
    }
    
    delta = B * B - 4 * A * C;
    
    if (delta < 0) {
        printf("Impossivel calcular\n");
        return 0;
    }
    
    raiz1 = (-B + sqrt(delta)) / (2 * A);
    raiz2 = (-B - sqrt(delta)) / (2 * A);
    
    printf("R1 = %.5lf\n", raiz1);
    printf("R2 = %.5lf\n", raiz2);
    
    return 0;
}
