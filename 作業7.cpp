#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n,sum=0;
	printf("1+2+3...+n=?,n=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	sum+=i;
	printf("1+2+3...+%d=%d\n",n,sum);
	
	system("pause");
	return 0;
}
