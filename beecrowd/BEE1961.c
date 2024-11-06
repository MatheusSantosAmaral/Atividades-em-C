#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int puloSapo, numCanos, altCanos, altCanos2, i, win = 1;
	
	scanf ("%d", &puloSapo);
	scanf ("%d", &numCanos);	
	
	
	
	for (i= 0; i < numCanos; i+=2)
	{
		scanf ("%d", &altCanos);
		scanf ("%d", &altCanos2);
		
		if (abs(altCanos - altCanos2) > (puloSapo))
		{
			win = 0;
		} 		
	}
	
	if (win)
	{
		printf ("YOU WIN\n");
	} else
	{
		printf ("GAME OVER\n");		
	}
	
	return 0;
}
