#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
    
    
    int n, resultado;
    int bit64, bit32, bit16, bit8, bit4, bit2;   

    printf("Entre com o valor de n: ");
    scanf("%d", &n);
    

    resultado = n;
    
 

    bit2  = resultado % 2;
    resultado = resultado / 2;

    bit4  = resultado % 2;
    resultado = resultado / 2;

    bit8  = resultado % 2;
    resultado = resultado / 2;

    bit16 = resultado % 2;
    resultado = resultado / 2;

    bit32 = resultado % 2;
    resultado = resultado / 2;

    bit64 = resultado % 2; 

    printf("O numero %d em binario = %d%d%d%d%d%d%d\n", n,resultado%2, bit64, bit32, bit16, bit8, bit4, bit2);
    
    int x1,x2,y1,y2;
    float cat1, cat2, dist;
    
    printf("entre com os valores para p1(x1,y1)");
   scanf("%d", &x1);
    scanf("%d",& y1);
    
    printf("entre com os valores para p2(x2,y2)");
	scanf("%d", &x2);
	scanf("%d", &y2);    
    
    cat1= pow((x2-x1),2);
    cat2= pow((y2-y1),2);
    
    dist= sqrt(cat1+cat2);
	
	
	
	printf("distancia: %f",dist);
	
	
	
	return 0;
}
