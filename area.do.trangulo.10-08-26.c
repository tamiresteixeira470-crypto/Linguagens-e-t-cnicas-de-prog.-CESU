#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float altura, base, area;
	
	printf("Insira o valor da base/n");
	scanf("%f",&base);
	
	printf("Insira o valor da altura/n");
	scanf("%f",&altura);
	
	area=(base*altura)/2;
	
	
	printf("Area do triangulo= %0.2f", area);
	
	return 0;
}
