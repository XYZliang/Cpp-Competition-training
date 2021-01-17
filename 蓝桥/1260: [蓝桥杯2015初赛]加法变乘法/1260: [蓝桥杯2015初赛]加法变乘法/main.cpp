#include <stdio.h>

int adds(int a,int b)
{
    static int m=0,n=3;
    n*=++m;
    m=n%a+b++;
    return m;
}

int main()
{
    printf("%d",adds(5,-1));
    printf("%d",adds(5,-1));
    return(0);
}
