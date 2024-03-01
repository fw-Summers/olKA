#include<stdio.h>
int main()
{
	int n,i,m;
	for(n=2;n<=1000;n++){
		m=0;
		for(i=1;i<=n/2;i++)
			if(n%i==0)m+=i;
		if(m==n){
			printf("%d its factors are 1",n);
			for(i=2;i<=n/2;i++)
				if(n%i==0)printf(",%d",i);
			printf("\n");
		}
	}
	return 0;
}