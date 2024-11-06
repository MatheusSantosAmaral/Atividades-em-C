#include <stdio.h>

int main () {
	
	int qntdAlunos, matricula, i, aluno=0;
	float notas, maior = 0;
	
	scanf ("%d", &qntdAlunos);
	
	for (i = 0; i < qntdAlunos; i++)
	{
		scanf ("%d", &matricula);
		scanf ("%f", &notas);
		
		if (notas > maior)
		{				
			maior = notas;
			aluno = matricula;
		
		} 
	}
	
	if (maior >= 8)
	{
		printf ("%d\n", aluno);
	} else 
	{
		printf ("Minimum note not reached\n");
	}
		
	return 0;
}
