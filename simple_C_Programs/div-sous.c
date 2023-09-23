#include<stdio.h>

	int sous(int x, int y){
		int s;
		s=x-y;
		return s;
}
	void main(){
		printf("Hello User");
		printf("\n");
		int a,b,i,resu=1,res,j;
		printf("X = ");
		scanf("%d",&a);
		printf("Y = ");
		scanf("%d",&b);
		i = sous(a,b);
		if (i < 0){
			printf("%d > %d",b,a);
	}
		else if (i > 0){
			j = sous(i,b);
			while (j>=0){
				j = sous(j,b);
				resu++;
		}	
			res=a-(b*resu);
			printf("%d x %d + %d = %d",b,resu,res,a);
	}
		else
			printf("les nbr sont =");
}
