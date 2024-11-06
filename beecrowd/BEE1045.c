//  Caua Nobrega RA 117387 - BEE ID 971968
//  Matheus Amaral RA 116620 - BEE ID 971955
//  Pedro Tanaka RA 117721 - BEE ID 971982
//  Rafael RA 116880 - BEE 971948
//  Ryan Ribeiro RA 116684 - BEE ID 971946
//  Sofia RA 116622 - BEE 971958

#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a,b,c, aux;
    
    scanf("%lf %lf %lf", &a,&b,&c);
    
    if (c>b){
    	aux=b;
    	b=c;
    	c=aux;
	}
	if (b>a){
		aux=a;
    	a=b;
    	b=aux;	
	}
	if (c>b){
    	aux=b;
    	b=c;
    	c=aux;
	}
	
	if (a>=b+c){
		printf("NAO FORMA TRIANGULO\n");
	} else if (pow(a,2)==pow(b,2)+pow(c,2)){
		printf("TRIANGULO RETANGULO\n");	
	} else 	if (pow(a,2)>pow(b,2)+pow(c,2)){
		printf("TRIANGULO OBTUSANGULO\n");	
	} else{
		printf("TRIANGULO ACUTANGULO\n");	
	}
	
	
	if (a==b && b==c){
		printf("TRIANGULO EQUILATERO\n");	
	} else if ((a==b && b!=c)||(a==c && c!=b)||(b==c && c!=a)){
		printf("TRIANGULO ISOSCELES\n");	
	}
	
	
    return 0;
}
