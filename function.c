#include <stdio.h>

int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else if(b>a)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int main()
{
    int high = max(10,20);
    printf("%d" , high);
}
