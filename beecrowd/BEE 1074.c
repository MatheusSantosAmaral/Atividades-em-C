//  Caua Nobrega RA 117387 - BEE ID 971968
//  Matheus Amaral RA 116620 - BEE ID 971955
//  Pedro Tanaka RA 117721 - BEE ID 971982
//  Rafael RA 116880 - BEE 971948
//  Ryan Ribeiro RA 116684 - BEE ID 971946
//  Sofia RA 116622 - BEE 971958

#include <stdio.h>

int main() {
	int i , valor, cnt;
	
	scanf("%d", &cnt);
	
	for(i = 1; i <= cnt; i++){
		
		scanf("%d", &valor);
		
		if(valor == 0){
			printf("NULL");
		
		} else if(valor % 2 == 0){
			printf("EVEN ");
			
		} else if(valor %2 != 0) {
			printf("ODD ");
		}
		
		if(valor > 0 ){
			printf("POSITIVE\n");
			
		} else if(valor < 0){
			printf("NEGATIVE\n");
			
		} else{
			printf("\n");
		}	
		
	}

	return 0;
}
