#include <stdio.h>
/*NAME: Mayuresh Dattaram Devrukhkar
COMPS DIV: C
ROLL NO :60
UIN :251P071
*/

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
     printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int *ptr = &arr[n - 1];
    printf("Array in reverse: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(ptr - i));
    }

    return 0;
}
