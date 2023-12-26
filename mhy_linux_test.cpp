#include<stdio.h>

int max(int a,int b)
{  
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a1 = 10, b1 = 20, c1 = 0;
    c1 = max(a1,b1);
    printf("c1=%d\n",c1);
    return 0;
}