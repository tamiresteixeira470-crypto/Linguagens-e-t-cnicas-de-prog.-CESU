#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {

float B,b,h, area;
printf("Insira o valor da Base maior \n");
scanf("%f",&B);

printf("Insira o valor da base menor\n ");
scanf("%f", &b);

printf("Insira o valor da altura \n");
scanf("%f", &h);

area=((B+b)*h)/2;

printf("Area do Trapezio %f B, %f b, %f h= %area", B,b,h, area);









	return 0;
}
