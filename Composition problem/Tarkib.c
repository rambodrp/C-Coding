#include<stdio.h>

int main(){
	int k,n,i,f,a,o;
	f = 1;
	a = 1; 
	scanf("%d""%d",&n,&k);
	for(i=1;i<=k;i++){
		f=f*n;
		n=n-1;
	}
	for(i=1;i<=k;i++){
		a=a*i;

	}
	o=f/a;
	printf("%d",o);
}