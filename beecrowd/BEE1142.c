#include <stdio.h>

int main () {
	int n, i, j, nmrs = 1;
	
	scanf ("%d", &n);
	
	for (i=0; i < n; i ++)
	{	
		for (j= 0; j < 3; j++)
		{
			printf ("%d ", nmrs);
			nmrs ++;	
		}

		nmrs++;
		printf ("PUM\n");
		
	}
	
	return 0;	
}
