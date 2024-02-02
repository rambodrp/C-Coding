#include<stdio.h>
#include<math.h>
int main(){
    float x,y,z;
    float f,answerA,answerB;
    scanf("%f%f%f",&x, &y, &z);
    f=y*y-(4*x*z);
    if(f==0)
    {
        answerA=((-y)/(2*x));
        printf("x=%f",answerA);
    }
    if(f>0)
    {
        answerB=sqrt(f);
        printf("%f"" ""%f",(-y-answerB)/(2*x),(-y+answerB)/(2*x));
    }
    else
    {
        printf ("No Root");
    }
    return 0;
}

