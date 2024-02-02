#include <stdio.h>
#include <stdlib.h>

int main()
{
    //sigma by Rambod Rezvan Panah
    //sigma by Rambod Rezvan Panah
    int m,n,j,i,S,a,b;
    S=0;
    scanf("%d",&n);
    scanf("%d",&m);
    //sigma by Rambod Rezvan Panah
    for(i=-10;i<=m;i++){
        for(j=1;j<=n;j++){
            a=(i+j)*(i+j)*(i+j);
            b=a/(j*j);
            S=S+b;
        }
    }
    printf("%d", S);

}
    //sigma by Rambod Rezvan Panah
    //sigma by Rambod Rezvan Panah

