#include<stdio.h>
#include<math.h>
int main()
{
	int n,b,s,g;
	for(n=100;n<=999;n++){
		b=n/100;
		s=(n-100*b)/10;
		g=n-100*b-10*s;
		if(n==pow(b,3)+pow(s,3)+pow(g,3))printf("%d\t",n);
	}
	return 0;
}