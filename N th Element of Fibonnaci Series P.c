#include<stdio.h>

int main()
{
    int a, b, x, result, element;
    a=0;
    b=1;
    printf("Enter the element number: ");
    scanf("%d",&element);
    for(x=0; x<element-1; x++)
    {
        result=a+b;
        a=b;
        b=result;
    }
    printf("%dth element of series is %d",element,a);
    return 0;
}
