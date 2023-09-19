#include <stdio.h>
#include <math.h>

	int fact(int n){
		int i,f=1;
		for(i=1;i<=n;i++){
			f=f*i;
}
		return f;
}
	int comb(int x,int y){
		int c;
		c=fact(x)/(fact(y)*fact(x-y));
		return c;
}
	void lig(int a){
		int j,com,b=1;
		for(j=0;j<=a;j++){
			com=comb(a,j);
			printf("%d\t",com);
}
}

	void main(){
		int nbr,l;
		printf("Nbr = ");
		scanf("%d",&nbr);
		for(l=1;l<=nbr;l++){
			lig(l);
			printf("\n");
}
}
