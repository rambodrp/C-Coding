#include<stdio.h>
//Rambod Rezvan Panah
int main(){
	int i=1,j,k,n;
	for(i<1;i<10;i++){
		printf("%d\n",i);
	}
	for (i=10;i<=1000;i++){
		k = 0;
		for(j=i;j>0;){
			n = j%10;
			k = k + n;
			j = j/10;
		}
		if(i%k==0){
			printf("%d\n",i);
		}
	}
}
//Rambod Rezvan Panah