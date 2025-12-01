#include <stdio.h>

/*NAME: Mayuresh Dattaram Devrukhkar
COMPS DIV: C
ROLL NO :60
UIN :251P071
*/

int main() {
    int a, b, sum;
    int *p1, *p2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    sum = *p1 + *p2;
    printf("Sum = %d\n", sum);

    return 0;
}
