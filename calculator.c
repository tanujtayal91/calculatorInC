#include<stdio.h>
void main()
{
        int a,b,sum,mul,div,sub;
        char op;
        printf("Enter the operator: ");
        scanf("%c",&op);
        printf("Enter 2 Numbers: ");
        scanf("%d %d",&a,&b);

        switch (op)
        {
        case '+': sum=a+b;
                  printf("The addition of %d , %d is: %d",a,b,sum);
                break;

        case '-': sub=a-b;
                  printf("The subtraction of %d , %d is: %d",a,b,sub);
                break;

        case '*': mul=a*b;
                  printf("The multiplicatio of %d , %d is: %d",a,b,mul);
                break;

        case '/': div=a/b;
                  printf("The division of %d , %d is: %d",a,b,div);
                break;
        
        default:
                break;
        }
}