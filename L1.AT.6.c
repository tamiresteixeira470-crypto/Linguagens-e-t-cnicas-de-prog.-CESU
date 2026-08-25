#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int totalDias,anos,meses,dias;
printf("insira os valores :");

scanf("%d", &totalDias);

anos=totalDias/365;
totalDias=totalDias%365;
meses=totalDias/30;
dias=totalDias%30;

printf("%d ano(s)\n",anos);
printf("%d meses\n",meses);
printf("%d dias\n",dias);

	return 0;
}
