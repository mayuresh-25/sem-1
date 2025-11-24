#include <stdio.h>
/* NAME: MAYURESH DATTARAM DEVRUKHKAR
COMPS DIV:C
ROLL NO :60 UIN:251P071
*/
int main() {
    int a, b, i, sum = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (i = a; i <= b; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}