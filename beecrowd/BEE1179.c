#include <stdio.h>

int main () {
	int i, j, x, qntPar = 0, qntImpar = 0, par [5], impar [5];
	
	for (i=0; i < 15; i++){
		scanf ("%d", &x);
		
		if (x % 2 == 0){
			par [qntPar] = x;
			qntPar++;	
			
			if (qntPar == 5)
				for (j = 0; j <5; j++){
					printf ("par[%d] = %d\n", j, par[j]);
					qntPar = 0;
				}
													
		} else {
			impar [qntImpar] = x;
			qntImpar++;
			
			if (qntImpar == 5)
				for (j = 0; j <5; j++){
					printf ("impar[%d] = %d\n", j, impar[j]);
					qntImpar = 0;
				}	
		}	
	}
	
	for (j = 0; j <qntImpar; j++){
		printf ("impar[%d] = %d\n", j, impar[j]);
	}	
	for (j = 0; j <qntPar; j++){
		printf ("par[%d] = %d\n", j, par[j]);
	}
	
	return 0;
}
