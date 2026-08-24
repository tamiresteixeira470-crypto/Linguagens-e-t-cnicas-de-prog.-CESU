#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

int a,b,c, maior_temp, maior;
printf("insira os valores de a,b,c");
scanf("%d %d %d", &a,&b,&c);
 
 if(a<b){
 	maior_temp=b;
} else{
	maior_temp=a;
}
printf("%d eh o maior\n", maior_temp);

	if(maior_temp<c){
 	maior=c;
} else{
	maior=maior_temp;
}
	
printf("%d eh o maior", maior);
	return 0;
}
