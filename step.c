#include<stdio.h>


int main()
{
    int thur,celuiso;
    int lower,upper,step;
    step = 10;

    lower=0;
    upper=300;

    while(lower<=upper){
        printf("%d ",lower);
        lower=lower+step;
    }
    
    return 0;

}