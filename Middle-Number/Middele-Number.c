#include <stdio.h>

int main(){
    int Nums[5];
    for(int a = 0 ; a < 5 ; a++ ){
        scanf("%i" , & Nums[a]);
    }
    int ArrengeNums[5];
    int decrease = 0 ;
    for (int a = 0 ; a < 5 ; a++){
        int count = 4 ;
        int draw = 0 ;
        for(int i = 0 ; i < 5 ; i++){
            if (Nums[a] > Nums [i]) count-- ;
            if (Nums[a] == Nums [i]) draw++ ;
        }
        if (draw > 1 ) {
            ArrengeNums[ draw - decrease ] = Nums[a] ;
            decrease ++ ;
        }else{
            ArrengeNums[ count ] = Nums[a] ;
        }
    }
    printf("%i" , ArrengeNums[2]);
}
