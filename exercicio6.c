#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int n, antecessor, sucessor;
	
	printf("Entre com o valor de n:");
	scanf("%d",&n);
	
	sucessor= n+1;
	antecessor= n-1;
	
	printf("o numero %d, seu antecessor %d e seu secessor %d", n, antecessor, sucessor  );

	

	return 0;
}
