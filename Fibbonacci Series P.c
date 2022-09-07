#include<stdio.h>

int main()
{
    int a, b, x, result, element;
    a=0;
    b=1;
    printf("Enter the number of elements: ");
    scanf("%d",&element);
    while(x<element)
    {
        printf("%d\t",a);
        result=a+b;
        a=b;
        b=result;
        x++;
    }
    return 0;
}
