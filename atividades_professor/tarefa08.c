#include <stdio.h>

int main () {
	
	int X, Y;
	
	scanf ("%d%d", &X, &Y);
	
	if (X >= 0 && Y >= 0 && X < 433 && Y < 469){
		printf ("dentro\n");
	} else {
		printf ("fora\n");
	}
}
