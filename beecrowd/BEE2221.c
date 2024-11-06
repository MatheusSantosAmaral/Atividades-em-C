#include <stdio.h>

typedef struct p{ 
	float valorGolpe;	
	int ataque;
	int defesa;
	int level;
	
} pokemon;

int main () {
	
	int inst, i, bonus = 0;
	
	pokemon dabriel, guarte;
	
	scanf ("%d", &inst);
	
	for (i = 1; i <= inst; i++){
		
		scanf ("%d\n", &bonus);
		
		scanf ("%d %d %d", &dabriel.ataque, &dabriel.defesa, &dabriel.level);
		
		if (dabriel.level % 2 == 0){
			dabriel.valorGolpe = (dabriel.ataque + dabriel.defesa)/2.00 + bonus;	
		} else {
			dabriel.valorGolpe = (dabriel.ataque + dabriel.defesa)/2.00;
		}
		
		scanf ("%d %d %d", &guarte.ataque, &guarte.defesa, &guarte.level);
		
		if (guarte.level % 2 == 0){
			guarte.valorGolpe = (guarte.ataque + guarte.defesa)/2.00 + bonus;	
		} else{
			guarte.valorGolpe = (guarte.ataque + guarte.defesa)/2.00;
		}
		
		if (dabriel.valorGolpe > guarte.valorGolpe){
			printf ("Dabriel\n");
		} else if (guarte.valorGolpe > dabriel.valorGolpe){
			printf ("Guarte\n");	
		} else if (guarte.valorGolpe == dabriel.valorGolpe){
			printf ("Empate\n");
		}
				
	}
	
	return 0;	
}
		

