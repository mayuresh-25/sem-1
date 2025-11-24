#include <stdio.h>

/* NAME: Mayuresh Dattaram Devrukhkar
   COMPS   DIV: C
   ROLL NO: 60
*/

int factorial_1(int num)
{
    int fact = 1;
    for(int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int a = 5;
    printf("Factorial of %d is %d", a, factorial_1(a));
    return 0;
}