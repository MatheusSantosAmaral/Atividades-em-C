#include <stdio.h>

int main (){
	int ano1, ano2;
	float dado1, dado2, diferenca;
	
	printf ("Digite o primeiro ano: ");
	scanf ("%d", &ano1);
	printf ("Digite o total de fluxos oficiais de %d: ", ano1);
	scanf ("%f", &dado1);	
	
	printf ("Digite o segundo ano: ");
	scanf ("%d", &ano2);
	printf ("Digite o total de fluxos oficiais de %d: ", ano2);
	scanf ("%f", &dado2);
	
	if (ano1 > ano2) {
		diferenca = dado1-dado2;
		printf ("A diferenca de recursos aplicados do ano mais recente para o mais antigo eh: %2.f", diferenca);
	}
	else if (ano2 > ano1) {
		diferenca = dado2-dado1;
		printf ("A diferenca de recursos aplicados do ano mais recente para o mais antigo eh: %2.f", diferenca);
	}
		
	
	return 0;
}
