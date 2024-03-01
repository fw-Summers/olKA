#include<stdio.h>//求1000以内的所有完数（一个数恰好等于其因子之和）
int main()
{
	int n,i,m;
	for(n=2;n<=1000;n++){
		m=0;
		for(i=1;i<=n/2;i++)
			if(n%i==0)m+=i;//m代表所有因子之和
		if(m==n){
			printf("%d its factors are 1",n);//1是所有完数的因子
			for(i=2;i<=n/2;i++)
				if(n%i==0)printf(",%d",i);//继续列出1以外的所有因子
			printf("\n");
		}
	}
	return 0;
}
