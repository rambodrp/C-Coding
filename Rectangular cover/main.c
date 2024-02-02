#include<stdio.h>
//By Rambod Rezvan Panah
int main(){
	int maxTool,minTool,maxArz,minArz,numbers,x,y,z,i,j;
	scanf("%d",&numbers);
	scanf("%d%d",&x,&y);
	maxTool=x;
	minTool=y;
	maxArz=y;
	minArz=x;
	//By Rambod Rezvan Panah

	for(i=1;i<numbers;i++){
		scanf("%d%d",&x,&y);
		if(x>maxTool){
			maxTool=x;
		}
		if(x<minArz){
			minArz=x;
		}
		if(y>maxArz){
			maxArz=y;
		}
		if(y<minTool){
			minTool=y;
		}
	}
	i=maxArz-minTool;
	j=maxTool-minArz;
	printf("%d",(j*i));
	//By Rambod Rezvan Panah
    //By Rambod Rezvan Panah
    //By Rambod Rezvan Panah
}
