#include<stdio.h>

int main()
{
    int p,c,m,avg;
    printf("Enter marks for Physics: ");
    scanf("%d", &p);
    printf("Enter marks for Chemistry: ");
    scanf("%d", &c);
    printf("Enter marks for Maths: ");
    scanf("%d", &m);
    avg=(p+c+m)/3;
    if(avg>=50)
    {
        printf("\nTHE STUDENT IS ELIGIBLE");
    }
    else {
        printf("\nTHE STUDENT IS NOT ELIGIBLE");
    }
    return 0;

}
