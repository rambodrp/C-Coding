#include <stdio.h>
//By Rambod Rezvan Panah
int g(int a,int b);
int numbers(int a){
	int  S= 0;
	while(a>0){
		S=S+1 ;
		a=a/10;
	}
	return S;
}
//By Rambod Rezvan Panah
int g(int a, int b){
	int S=0,i;
	while(S<b){
		i=a%10;
		S=S+1;
		a=a/10;
	}
	return i;
}
//By Rambod Rezvan Panah
int main()
{
	int j,h,S,i;
	S=0;
	scanf("%d",&h);
	for(i=1;S<h;i++){
		S=S+numbers(i);
	}
	printf("%d",g(i-1,S-h+1));
}
//By Rambod Rezvan Panah
//By Rambod Rezvan Panah


