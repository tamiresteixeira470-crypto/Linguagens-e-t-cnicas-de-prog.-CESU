#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int a,b,c, maiorTemp, maior;
printf("insira tres valores e identifique o maior :");	
	scanf("%d",&a);
	scanf("%d", &b);
	scanf("%d",&c);

maiorTemp= ((a+b+abs(a-b))/2);

maior= ((maiorTemp+c+abs(maiorTemp-c))/2);
	printf("o maior entre |%d|%d||%d|=%d", a,b,c,maior);
	

	
	return 0;
}
