//  Caua Nobrega RA 117387 - BEE ID 971968
//  Matheus Amaral RA 116620 - BEE ID 971955
//  Pedro Tanaka RA 117721 - BEE ID 971982
//  Rafael RA 116880 - BEE 971948
//  Ryan Ribeiro RA 116684 - BEE ID 971946
//  Sofia RA 116622 - BEE 971958

#include <stdio.h>

int main() {

    int num, maior = 0;

    while(1) {
        scanf("%d", &num);

       
        if (num == 0) {
            break;
        }
      
        if (num > maior) {
            maior = num;
        }
    }

    printf("%d\n", maior);

    return 0;
}
