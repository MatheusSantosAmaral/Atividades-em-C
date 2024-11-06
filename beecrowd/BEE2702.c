#include <stdio.h>

int main (){
	int dispfrango, dispbife, dispmassa,frango,
	bife, massa, natendidos;
	
	scanf ("%d%d%d%d%d%d", &dispfrango, &dispbife, &dispmassa, &frango,
	&bife, &massa);
	
	natendidos = 0;
	
	if (frango > dispfrango)
	{
		natendidos = frango - dispfrango;
	}
	if (dispbife < bife)
	{
		natendidos += bife - dispbife;
	}
	
	if (dispmassa < massa)
	{
		natendidos += massa - dispmassa;
	}
	
	printf ("%d\n", natendidos);
	
	return 0;
}
