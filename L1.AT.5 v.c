#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float v1,v2,v3,v4;
float soma, media, produtorio;

printf("insira 4 valores");
scanf("%f %f %f %f",&v1,&v2,&v3,&v4);

soma=v1+v2+v3+v4;
media=soma/4;
produtorio=v1*v2*v3*v4;

printf("Soma: %.2f\n", soma);
printf("Media: %.2f\n", media);
printf("Produtório: %.2f\n", produtorio);
	return 0;
}
