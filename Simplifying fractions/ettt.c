#include<stdio.h>
int main(){
	int a,b,i,s;
	scanf("%d""%d",&a,&b);
	if(a>=0 && b>=0){
	for(i=a;i>=1;i--){
		if(a%i==0){
			if(b%i==0){
				a=a/i;
				b=b/i;
			}
		}
	}
	printf("%d""/""%d",a,b);
	}
	else if(a<0 && b<0){
		a=-a;
		b=-b;
		for(i=a;i>=1;i--){
		if(a%i==0){
			if(b%i==0){
				a=a/i;
				b=b/i;
			}
		}
	}
	a=-a;
	b=-b;
	printf("%d""/""%d",a,b);
}
	else if(a<0 && b>0){
		a=-a;
		for(i=a;i>=1;i--){
		if(a%i==0){
			if(b%i==0){
				a=a/i;
				b=b/i;
			}
		}
	}
	a=-a;
	printf("%d""/""%d",a,b);
		}
		else{
		b=-b;
		for(i=a;i>=1;i--){
		if(a%i==0){
			if(b%i==0){
				a=a/i;
				b=b/i;
			}
		}
	}
	b=-b;
	printf("%d""/""%d",a,b);
		}
}
