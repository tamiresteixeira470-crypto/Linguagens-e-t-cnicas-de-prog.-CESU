#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[50];
	
double totalVendas,totalReceber, salarioFixo;
scanf("%s", nome);
scanf("%lf %lf", &totalVendas,&salarioFixo);

totalReceber=salarioFixo+(totalVendas*0.15);

printf("TOTAL = R$ %.2lf\n", totalReceber);
	return 0;
}
