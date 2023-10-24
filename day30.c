#include<stdio.h>

int square(int num)
{
    int result;
    result=num*num;
    return(result);
}

int main()
{
    int sqr,n;
    printf("enter the number");
    scanf("%d",&n);
    sqr=square(n);
    printf("square of number =%d\n",sqr);
    return 0;
}

    
    



