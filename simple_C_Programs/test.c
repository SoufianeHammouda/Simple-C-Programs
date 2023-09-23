#include <stdio.h>

int puissance(int x, int n) {
int i,p;
p=1;
for (i=1;i<=n;i++)
 p=p*x;
return p;
}

void main() {
printf("Hello User");
printf("\n");
int nbr,i,s,pu;
printf("n=");
scanf("%d",&nbr);
s=0;
for(i=1;i<nbr;i++){
pu = puissance(i,i);
s = s + pu;
}
printf("la somme est : %d\n",s);

}
