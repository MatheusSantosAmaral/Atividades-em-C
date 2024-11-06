//  Caua Nobrega RA 117387 - BEE ID 971968
//  Matheus Amaral RA 116620 - BEE ID 971955
//  Pedro Tanaka RA 117721 - BEE ID 971982
//  Rafael RA 116880 - BEE 971948
//  Ryan Ribeiro RA 116684 - BEE ID 971946
//  Sofia RA 116622 - BEE 971958

#include <stdio.h>

int main () {
	
	int i, n, qnt, total = 0, coelhos = 0, ratos = 0, sapos = 0;
	char tipo;
		
	scanf ("%d", &n);
	
	for (i =0; i < n; i++)
	{	
		scanf ("%d %c", &qnt, &tipo);
		total += qnt;
			
		if (tipo == 'C')
		{
			coelhos += qnt;
		}
		else if (tipo == 'R')
		{
			ratos += qnt;
		}
			else if (tipo == 'S')
		{
			sapos += qnt;
		}
			
	}

	printf ("Total: %d cobaias\n", total);
	printf ("Total de coelhos: %d\n", coelhos);
	printf ("Total de ratos: %d\n", ratos);
	printf ("Total de sapos: %d\n", sapos);
	printf ("Percentual de coelhos: %.2f %%\n", (coelhos * 100.0) / total);
	printf ("Percentual de ratos: %.2f %%\n", (ratos * 100.0) / total);
	printf ("Percentual de sapos: %.2f %%\n", (sapos * 100.0) / total);
		
		
		
	return 0;
}
