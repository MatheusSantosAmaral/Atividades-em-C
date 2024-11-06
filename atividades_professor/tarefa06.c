#include <stdio.h>
	
int main () {
	int idfuncionario, horastrabalhadas;
	float vlhora; 
				
	scanf ("%d%d%f", &idfuncionario, &horastrabalhadas, &vlhora);
				
	printf ("NUMBER = %d\n", idfuncionario);
	printf ("SALARY = U$ %.2f\n", horastrabalhadas*vlhora);
				
	return 0;
}
