#include <stdio.h>

/*Name: Mayuresh Dattaram Devrukhkar
COMPS DIV: C
ROLL NO :60
UIN :251P071
*/

int main() {
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];

    for(int i = 1; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element is: %d", largest);

    return 0;
}
