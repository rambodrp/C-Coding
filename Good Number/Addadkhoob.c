#include<stdio.h>
int main()
{
	int plus = 2 , count , k , y ,x;
	scanf("%d",&k);
	for(x = 1;  ;){
		count =0;
		for(int y=1;y<=x;y++)
			if(x%y==0) count++;
		if(count>=k) break;
		x+=plus;
		plus++;
	}
		printf("%d",x);
}