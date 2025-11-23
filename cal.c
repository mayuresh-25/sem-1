#include<stdio.h>

int main()
{
    /* NAME: MAYURESH DATTARAM DEVRUKHKAR
       COMPS DIV: C
       UIN:251P071 ROLL NO: 60*/
       int n,x,y,r,q;
       start:
            printf("---Driver-menu---");
            printf("\n Select the function\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n6.Quit\n");
            scanf("%d", &n);
            switch(n)
            {
                 case 1:
                 printf("Enter the first number=\n");
                 scanf("%d",&x);
                 printf("Enter the second number=");
                 scanf("%d", &y);
                 r=x+y;
                 printf("%d+%d=%d",x,y,r);
                 goto start;
                 break;
                 case 2:
                 printf("Enter the first number=\n");
                 scanf("%d",&x);
                 printf("Enter the second number=");
                 scanf("%d", &y);
                 r=x-y;
                 printf("%d-%d=%d",x,y,r);
                 goto start;
                 break;
                 case 3:
                 printf("Enter the first number=\n");
                 scanf("%d",&x);
                 printf("Enter the second number=");
                 scanf("%d", &y);
                 r=x*y;
                 printf("%d*%d=%d",x,y,r);
                 goto start;
                 break;
                 case 4:
                 printf("Enter the first number=\n");
                 scanf("%d",&x);
                 printf("Enter the second number=");
                 scanf("%d", &y);
                 r=x/y;
                 printf("%d/%d=%d",x,y,r);
                 goto start;
                 break;
                 case 5:
                 printf("Enter the first number=\n");
                 scanf("%d",&x);
                 printf("Enter the second number=");
                 scanf("%d", &y);
                 r=x%y;
                 printf("%d%%d=%d",x,y,r);
                 goto start;
                 break;
                 case 6:
                 break;
                default:
                printf("INVALID CODE....!");
                goto start;

            }
    printf("THANK YOU");
    return 0;
}
