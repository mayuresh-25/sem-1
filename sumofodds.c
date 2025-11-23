#include<stdio.h>

int main()
{
    int  lim, sum=0;
    float num;
    printf("Enter the limit for numbers to be entered: ");
    scanf("%d", &lim);
    printf("\n Enter the numbers: ");
    for(int i=1; i<=lim; i++ )
    {
        scanf("%d",&num);
        if(num%2!=0)
        {
            sum+= num;
        }
    }

    printf("The sum of odd numbers is: %d\n", &sum);
    return 0;
}
