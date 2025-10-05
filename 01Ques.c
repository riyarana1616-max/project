#include<stdio.h>
int main() 
{
    int a,b,c,d,e,sum,percentage;
    printf("enter the marks of 1 subject: ");
    scanf("%d",&a);
    printf("enter the marks of 2 subject: ");
    scanf("%d",&b);
    printf("enter the marks of 3 subject: ");
    scanf("%d",&c);
    printf("enter the marks of 4 subject: ");
    scanf("%d",&d);
    printf("enter the marks of 5 subject: ");
    scanf("%d",&e);
    sum= a+b+c+d+e;
    percentage=(sum/500.0)*100;
    printf("sum of marks = %d\n",sum);
    printf("percentage = %d\n",percentage);
    return 0;
}
