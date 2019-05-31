#include <stdio.h>
#include<stdlib.h>
#define f(a,b,c) (a+b+c)*(a-b-c)
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int na,nb,nc,t;

int main(void) {
	printf("¿é¤Ja:\n");
	scanf("%d",&na);
	printf("¿é¤Jb:\n");
	scanf("%d",&nb);
	printf("¿é¤Jc:\n");
	scanf("%d",&nc);
	
	t=f(na,nb,nc);
	printf("(a+b+c)*(a-b-c)=%d",t);
	return 0;
}
