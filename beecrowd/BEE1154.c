#include <stdio.h>

int main () {
	int idade, soma = 0, indv = 0;
	float media;
	
	while (1) {
		scanf ("%d", &idade);
		
		if (idade < 0)
		{
			break;
		} else {
			soma = idade + soma;
			indv += 1;
		}		
	} 
	
	media = (float)soma/indv;	
	printf ("%.2f\n", media);		
	
	return 0;
}
