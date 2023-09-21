#include <stdio.h>
#include <math.h>

int fact(int a) {
int i,p=1;
for (i=1;i<=a;i++)
p=p*i;
return p;
}
void main()
{
    printf("Hello User");
	printf("\n");
    int c,n,p,np;
    printf("n=");
    scanf("%d",&n);
    printf("p=");
    scanf("%d",&p);
    n = fact(n);
    p = fact(p);
    np = fact(n-p);
    c=n/(p*np);
    printf("le CNP est : %d",c);
}

