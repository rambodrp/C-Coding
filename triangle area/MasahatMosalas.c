#include <stdio.h>

int main(){
    int Mokhtasats[6];
    int a = 0 ;
    for(int i = 1 ; i <= 3 ; i++){
        scanf("%i %i" , & Mokhtasats[a] , & Mokhtasats[a + 1]);
        a += 2;
    }
    int sub = 0.5 * (Mokhtasats[0] * (Mokhtasats[3] - Mokhtasats[5]) + Mokhtasats[2] * (Mokhtasats[5] - Mokhtasats[1]) + Mokhtasats[4] * (Mokhtasats[1] - Mokhtasats[3]));
    (sub < 0) ? sub = sub * - 1 : sub ;
    printf("%i" , sub);
}
